using PYTHIA8
using FHist
using Plots: plot, plot!, theme

theme(:wong2, frame=:box, grid=false, minorticks=true,
      guidefontvalign=:top, guidefonthalign=:right,
      xlims=(:auto, :auto), lw=1.2, lab="", colorbar=false)

pythia = PYTHIA8.Pythia("", false);
pythia << "Beams:eCM = 8000." <<
          "HardQCD:all = on" <<
          "PhaseSpace:pTHatMin = 20.";

pythia << "Next:numberShowEvent = 0" <<
          "Next:numberShowProcess = 0";

pythia |> init;

mult = Hist1D(binedges=range(-0.5, 499.5, 26));

for iEvent in 1:200
    pythia |> next || continue
    # Find number of all final charged particles and fill histogram.
    nCharged = count(p -> isFinal(p) && isCharged(p), pythia |> event)
    atomic_push!(mult, nCharged)
end

pythia |> PYTHIA8.stat

img = plot(mult, xlabel="counts", ylabel="#particles",
           title="Charged Multiplicity Distribution", seriestype=:stepbins,
           c=2, lc=1, fill=0);
display(img)

pythia_mt = PYTHIA8.PythiaParallel("", false);

pythia_mt << "Beams:eCM = 8000." <<
             "HardQCD:all = on" <<
             "PhaseSpace:pTHatMin = 20.";

pythia_mt << "Parallelism:numThreads = 4";

pythia_mt << "Main:numberOfEvents = 200";

function w_init(pythiaNow)::CxxBool
    Core.println("Initializing Pythia with index $(mode(pythiaNow |> settings, "Parallelism:index")).")
    return pythiaNow |> init
end;

init(pythia_mt, w_init);

mult_mt = Hist1D(binedges=range(-0.5, 499.5, 26));

function analyze(pythiaNow)::Nothing
    nCharged = count(p -> isFinal(p) && isCharged(p), pythiaNow |> event)
    atomic_push!(mult_mt, nCharged)
    return
end

PYTHIA8.run(pythia_mt, analyze)

pythia_mt |> PYTHIA8.stat

img = plot(mult_mt, xlabel="counts", ylabel="#particles",
           title="Charged Multiplicity Distribution (multi-threaded)", seriestype=:stepbins,
           c=2, lc=1, fill=0);
display(img)

empty!(mult);
empty!(mult_mt);

st_elap = @elapsed begin
    for iEvent in 1:1000
        pythia |> next || continue
        nCharged = count(p -> isFinal(p) && isCharged(p), pythia |> event)
        atomic_push!(mult, nCharged)
    end
end

pythia_mt << "Main:numberOfEvents = 1000"
mt_elap = @elapsed begin
    PYTHIA8.run(pythia_mt, analyze)
end

println("Speedup is $(st_elap/mt_elap).")

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

img = plot(n_threads, speedup, xlabel="#threads", ylabel="speedup",
           title="Speedup vs #threads (#cores = $(Sys.CPU_THREADS))",
           seriestype=:scatter, legend=false,
           xscale=:log10, yscale=:log10);

plot!(n_threads, n_threads, seriestype=:line)
display(img)
