# main296.jl 

# This code is an example of how Pythia can be used as a shared library. 
# The physics case is a study of total cross sections, which cannot be
# exposed through the normal Python interface. Instead a class encapsulating
# the desired functionality (PythiaCrossSection) is implemented in 
# main296.cc, and exposed to calls below using ctypes, which comes 
# standard with Python.
# To use this example, main296Lib.cc must first be compiled as a shared 
# library with make libmain296Lib.so, and then the Python code below run. 


using PYTHIA8

#  Let's start by building the shared library
prefix = ENV["PYTHIA8"]
Base.run(`c++ -O2 -shared -fPIC -std=c++11 -I$prefix/include -Wl,-rpath,$prefix/lib -L$prefix/lib -lpythia8 -o main296Lib.so $(@__DIR__)/main296Lib.cc`)

# The shared library is now built, and we can define the PythiaCrossSection type
const lib = "./main296Lib.so"

# The PythiaCrossSection type is the Julia interface to the
# PythiaCrossSection C++ class defined in main296Lib.cc.
# The class is written as a resource class, with the actual interface only
# accesible inside the class as PythiaInterfacer, to ensure proper garbage 
# collection.
# The PythiaCrossSection class should therefore only be instantiated using 
# a with statement, which will give direct access to the interface, as seen
# in the example use case below.
mutable struct PythiaCrossSection
    modeSigma::Int
    ptr::Ptr{Cvoid}
    function PythiaCrossSection(modeSigma)
        ptr = @ccall lib.PythiaCrossSection_new(modeSigma::Int32)::Ptr{Cvoid}
        this =  new(modeSigma, ptr)
        finalizer(delete!, this)
    end
end
delete!(self::PythiaCrossSection) = @ccall lib.PythiaCrossSection_del(self.ptr::Ptr{Cvoid})::Cvoid
calc(self::PythiaCrossSection, idA, idB, sqrtS) = @ccall lib.PythiaCrossSection_calc(self.ptr::Ptr{Cvoid}, idA::Int32, idB::Int32, sqrtS::Float64)::Cvoid
sigmaTot(self::PythiaCrossSection) = @ccall lib.PythiaCrossSection_sigmaTot(self.ptr::Ptr{Cvoid})::Float64
sigmaEl(self::PythiaCrossSection) = @ccall lib.PythiaCrossSection_sigmaEl(self.ptr::Ptr{Cvoid})::Float64

# The PythiaCrossSection C++ class is now accessible from Julia, and can be used as shown below.

# The following is the example code illustrating a use case of the above.
# Calculate cross section in the range 10-10000 GeV.
sqrts = [10i for i in 1:1000]
ppTotal = Float64[]
ppElastic = Float64[]

# mode = 1 is The Schuler and Sjostrand model.
pythiaCross = PythiaCrossSection(1)
for sqs in sqrts
    calc(pythiaCross, 2212, 2212, sqs)
    push!(ppTotal, sigmaTot(pythiaCross))
    push!(ppElastic, sigmaEl(pythiaCross))
end

using Plots: plot, plot!
using LaTeXStrings

plot(sqrts, ppTotal, color=:red, label=L"$\sigma_{tot}$ (SaS)",
     xlabel=L"$\sqrt{s}$ [GeV]", ylabel=L"$\sigma$ [mb]", xaxis=:log)   
plot!(sqrts, ppElastic,color=:blue,label=L"$\sigma_{el}$ (SaS)")
