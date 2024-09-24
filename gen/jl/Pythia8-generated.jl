module Pythia8


import Base.getindex
import Base.setindex!

using CxxWrap
@wrapmodule(()->"$(@__DIR__)/../deps/libjlPythia8")

function __init__()
    @initcxx
end

end #module
