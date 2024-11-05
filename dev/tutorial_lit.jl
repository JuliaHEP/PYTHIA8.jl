# # PYTHIA8.jl Tutorial
# This turorial demostrates a simple application of PYTHIA8.jl to generate some
# events and present the results in form of histograms. Please refer to the PYTHIA 
# [documentation](https://pythia.org/manuals/pythia8312/Welcome.html) for more details 
# on the parameters and the physics processes.
#
#md # !!! note "Note that"
#md #     You can also download this tutorial as a
#md #     [Jupyter notebook](pythia8_tutorial.ipynb) and a plain
#md #     [Julia source file](pythia8_tutorial.jl).
#
#md # #### Table of contents
#md # ```@contents
#md # Pages = ["tutorial.md"]
#md # Depth = 2:3
#md # ```
#
# ## Generate events and plot the charged multiplicity distribution
# In this example, we will generate 200 events at a center of mass energy of 8000 GeV
# and plot the charged multiplicity distribution.
#
# ### Loading the necessary modules
# - We will use the `PYTHIA8` module to run the event generation.
# - We will use the [`FHist`](https://moelf.github.io/FHist.jl/stable/) module to create the histograms.
# - We will use the [`Plots`](https://docs.juliaplots.org/stable/) module to plot them.
# If these modules are not installed, you can install them by running the following commands:
# ```julia
# using Pkg
# Pkg.add("PYTHIA8")
# Pkg.add("FHist")
# Pkg.add("Plots")
# ```
using PYTHIA8
using FHist
using Plots: plot, plot!, theme
#md import DisplayAs: PNG #hide

# Define the theme for the plots. See available [themes](https://docs.juliaplots.org/stable/generated/plotthemes/) 
# and [attributes](https://docs.juliaplots.org/stable/attributes/) in Plots.jl.
theme(:wong2, frame=:box, grid=false, minorticks=true,
      guidefontvalign=:top, guidefonthalign=:right,
      xlims=(:auto, :auto), lw=1.2, lab="", colorbar=false)

# ### Initialize PYTHIA
# We will initialize PYTHIA with the following settings:
# - Center of mass energy of the collision: 8000 GeV
# - All hard QCD processes are enabled
# - Minimum transverse momentum of the hard process: 20 GeV
# 
# We use the operator `<<` to set the parameters and the operator `|>` to pipe to 
# the `init` function.
# This added interface is quite ergonomic, however alternatively, we can use the functions directly 
# provided by C++ interface, e.g.,
# - `readString(pythia, "Beams:eCM = 8000.")` or 
# - `parm( settings(pythia), "Beams:eCM", 8000.)`
pythia = PYTHIA8.Pythia("", false);
pythia << "Beams:eCM = 8000." << 
          "HardQCD:all = on" << 
          "PhaseSpace:pTHatMin = 20.";
# The purpose of the next two lines is to reduce the amount of output during the event generation
pythia << "Next:numberShowEvent = 0" <<
          "Next:numberShowProcess = 0"; 
# Initialize the event generation. The `init` function returns a boolean value. 
# Alternatively, we can use the direct call to `init(pythia)` function.
pythia |> init;

# ### Create a 1D histogram
# We will create a histogram to store the charged multiplicity distribution. The histogram
# is defined with 25 bins ranging from -0.5 to 499.5. Note that with `ranges` we need to specify
# the number of edges (26) and not the number of bins (25)
mult = Hist1D(binedges=range(-0.5, 499.5, 26));

# ### Generate events
# We will generate 200 events and fill the histogram with the number of charged particles making
# use of the [`count`](https://docs.julialang.org/en/v1/base/collections/#Base.count) function. We use the
# `push!` function to fill the histogram.
for iEvent in 1:200
    pythia |> next || continue
    ## Find number of all final charged particles and fill histogram.
    nCharged = count(p -> isFinal(p) && isCharged(p), pythia |> event) 
    push!(mult, nCharged)
end

# ### Print the statistics and plot charged multiplicity distribution
# Print the generation statistics using the `stat` function from PYTHIA.
pythia |> PYTHIA8.stat

# Plot the histogram with the `plot` function from Plots.jl. We use the `stepbins` seriestype
# to plot the histogram as a step plot.
img = plot(mult, xlabel="counts", ylabel="#particles", 
           title="Charged Multiplicity Distribution", seriestype=:stepbins,
           c=2, lc=1, fill=0);
display(img)
#md PNG(img) #hide

# ## Multi-threaded version of the same example
# In this example we repeat the same example as before but using multi-threading to 
# generate the events faster.

# ### Initialize Parallel PYTHIA
# Create an instance of `PythiaParallel` with the same settings as before. The `PythiaParallel`
# class is used to generate events concurrently using multiple threads. The settings are copied
# for each Pythia instance.
pythia_mt = PYTHIA8.PythiaParallel("", false);

# PythiaParallel reads settings the same way as the normal Pythia does.
pythia_mt << "Beams:eCM = 8000." << 
             "HardQCD:all = on" << 
             "PhaseSpace:pTHatMin = 20.";

# The maximum degree of parallelism. If set to 0 (default), the program
# will use the maximum number of threads supported by the hardware.
pythia_mt << "Parallelism:numThreads = 4";

# This defines the number of events generated by PythiaParallel::run.
pythia_mt << "Main:numberOfEvents = 200";

# The next is a user provided function to initialize each underlying Pythia instance (one per thread).
# Please note that the function is called concurrently, therefore the use needs to avoid calling 
# thread-unsafe functions. This is the reason we use the `Core.println` function instead of `println`.
function w_init(pythia)::CxxBool
    Core.println("Initializing Pythia with index $(mode(pythia |> settings, "Parallelism:index")).")
    return pythia |> init
end;

# Initialize the event generation. The `init` function returns a boolean value to indicate the success. The user
# provided function `w_init` is called for each thread.
init(pythia_mt, w_init);

# ### Create a 1D histogram
mult_mt = Hist1D(binedges=range(-0.5, 499.5, 26));

# ### Generate events
# Define a user function that will be called for each generated event. This function will
# be called concurrently by the threads. Therefore, we need to use thread-safe functions. Filling
# the histogram with `atomic_push` is thread-safe. 
# The function takes a `Pythia` object as the first argument and returns `Nothing`.
function analyze(pythiaNow)::Nothing
    nCharged = count(p -> isFinal(p) && isCharged(p), pythiaNow |> event)
    atomic_push!(mult_mt, nCharged)
    return
end
# Run the event generation. The number of events has been set in the `Main:numberOfEvents` parameter.
PYTHIA8.run(pythia_mt, analyze);

# ### Print the statistics and plot charged multiplicity distribution
# Print the statistics using the `stat` function from PYTHIA8.jl
pythia_mt |> PYTHIA8.stat

# Plot the result histogram
img = plot(mult_mt, xlabel="counts", ylabel="#particles", 
           title="Charged Multiplicity Distribution (multi-threaded)", seriestype=:stepbins,
           c=2, lc=1, fill=0);
display(img)
#md PNG(img) #hide

# ## Speed comparison between the two versions
# We will generate 1000 events and compare the time taken by the two versions.

empty!(mult);
empty!(mult_mt);

# ### Single-threaded version
# Generate 1000 events and measure the time taken. This is done using the `@elapsed` macro.
st_elap = @elapsed begin
    for iEvent in 1:1000
        pythia |> next || continue
        nCharged = count(p -> isFinal(p) && isCharged(p), pythia |> event) 
        atomic_push!(mult, nCharged)
    end
end
# ### Multi-threaded version
# Generate 1000 events and measure the time taken. This is done using the `@elapsed` macro.
pythia_mt << "Main:numberOfEvents = 1000"
mt_elap = @elapsed begin
    PYTHIA8.run(pythia_mt, analyze)
end

# Print the speedup factor (4 threads)
println("Speedup is $(st_elap/mt_elap).")

# ### Make a plot of the speedup factor
# We will generate events using 1, 2, 4, 8, 16, and 32 threads and plot the speedup factor.
# The speedup factor is defined as the ratio of the time taken by the single-threaded version
# to the time taken by the multi-threaded version.
n_threads = [2^n for n in 0:5]
speedup = Float64[]
w_init(pythiaNow)::CxxBool = pythiaNow |> init
for n_thread in n_threads
    empty!(mult_mt)
    _pythia = PYTHIA8.PythiaParallel("", false);
    _pythia << "Beams:eCM = 8000." <<
               "HardQCD:all = on" <<
               "PhaseSpace:pTHatMin = 20." <<
               "Parallelism:numThreads = $n_thread" <<
               "Main:numberOfEvents = 1000"
    init(_pythia, w_init)

    elap = @elapsed begin
        PYTHIA8.run(_pythia, analyze)
    end
    push!(speedup, st_elap/elap)
end;

# Plot the speedup factor vs the number of threads and overlay the line for the ideal scaling.
img = plot(n_threads, speedup, xlabel="#threads", ylabel="speedup",
           title="Speedup vs #threads (#cores = $(Sys.CPU_THREADS))", 
           seriestype=:scatter, legend=false,
           xscale=:log10, yscale=:log10);
           # Add a line to the same plot
plot!(n_threads, n_threads, seriestype=:line)
display(img)
#md PNG(img) #hide

#md # !!! note "Note that"
#md #     The plot is generated in a CI node using the cores available in the node. The speedup factor 
#md #     may not scale as expected.


