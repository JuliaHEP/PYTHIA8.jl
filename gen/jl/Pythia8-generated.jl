module Pythia8


import Base.getindex
import Base.setindex!

using CxxWrap
@wrapmodule(()->"libjlPythia8")

function __init__()
    @initcxx
end

end #module
