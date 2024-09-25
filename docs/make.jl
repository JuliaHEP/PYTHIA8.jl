using PYTHIA8
using Documenter

# Workaround for a clash with the Base.:+ function defined in PYTHIA8.jl
Base.:+(x::Ptr{Nothing}, y::Int64) = x + UInt64(y)

makedocs(;
    modules = [Pythia8],
    format = Documenter.HTML(
        prettyurls = Base.get(ENV, "CI", nothing) == "true",
        repolink="https://github.com/JuliaHEP/PYTHIA8.jl",
    ),
    pages=[
        "Introduction" => "index.md",
        "Public APIs" => "api.md",
        "Release Notes" => "release_notes.md",
    ],
    checkdocs=:exports,
    repo="https://github.com/JuliaHEP/PYTHIA8.jl/blob/{commit}{path}#L{line}",
    sitename="PYTHIA8.jl",
    authors="Pere Mato",
)

deploydocs(;
    repo="github.com/JuliaHEP/PYTHIA8.jl",
    push_preview = true
)
