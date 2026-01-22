using PYTHIA8
using Documenter
using Literate

gen_content_dir = joinpath(@__DIR__, "src")
tutorial_src = joinpath(@__DIR__, "src", "tutorial_lit.jl")
Literate.markdown(tutorial_src, gen_content_dir, name = "tutorial", documenter = true, credit = true)
Literate.notebook(tutorial_src, gen_content_dir, execute = false, name = "pythia8_tutorial", documenter = true, credit = true)
Literate.script(tutorial_src, gen_content_dir, keep_comments = false, name = "pythia8_tutorial", documenter = true, credit = false)

makedocs(;
    modules = [PYTHIA8],
    format = Documenter.HTML(
        prettyurls = Base.get(ENV, "CI", nothing) == "true",
        repolink="https://github.com/JuliaHEP/PYTHIA8.jl",
    ),
    pages=[
        "Introduction" => "index.md",
        "Tutorial" => "tutorial.md",
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
