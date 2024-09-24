using Documenter
using Pythia8

makedocs(;
    modules=[Pythia8],
    format = Documenter.HTML(
        prettyurls = Base.get(ENV, "CI", nothing) == "true",
        repolink="https://github.com/JuliaHEP/Pythia8.jl",
    ),
    pages=[
        "Introduction" => "index.md",
        "Public APIs" => "api.md",
        "Release Notes" => "release_notes.md",
    ],
    checkdocs=:exports,
    repo="https://github.com/JuliaHEP/Pythia8.jl/blob/{commit}{path}#L{line}",
    sitename="Pythia8.jl",
    authors="Pere Mato",
)

deploydocs(;
    repo="github.com/JuliaHEP/Pythia8.jl",
    push_preview = true
)
