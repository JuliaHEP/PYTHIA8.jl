
# Release Notes

## 0.3.0 (29-08-2025)
### New functionality
- Upgraded to latest CxxWrap version 0.17.3

## 0.2.1 (18-11-2024)
### New functionality
- Adapted `gen/build.jl` to use the WrapIt.jl package instead of a locally installed `wrapit` 
### Fixes
- Removed Hist::operator+(double) to avoid [#457](https://github.com/JuliaInterop/CxxWrap.jl/issues/458)
- Do not export `cd` to avoid warnings  

## 0.2.0 (07-11-2024)
### New functionality
- Added 2 more new examples: main294.jl and main296.jl
- Added a tutorial in the documentation using the module Literate.jl to generate markdown and notebook from single source.

## 0.1.1 (03-10-2024)
### Fixes
- Lower the version requirements InteractiveUtils.

## 0.1.0 (25-09-2024)
- Initial release with basic functionality needed to run the first 3 examples.
