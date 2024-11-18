cmake_minimum_required(VERSION 3.21)
project(Pythia8Wrap)

set(CMAKE_MACOSX_RPATH 1)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

#---Find JlCxx package-------------------------------------------------------------
find_package(JlCxx)
get_target_property(JlCxx_location JlCxx::cxxwrap_julia LOCATION)
get_filename_component(JlCxx_location ${JlCxx_location} DIRECTORY)
set(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib;${JlCxx_location}")
message(STATUS "Found JlCxx at ${JlCxx_location}")
set(CMAKE_FIND_PACKAGE_PREFER_CONFIG TRUE)

#---Find Pythia8---------------------------------------------------------------------
find_path(Pythia8_INCLUDE_DIR
          NAMES Pythia8/Pythia.h
          PATH_SUFFIXES include include/Pythia8 include/pythia8
          DOC "Specify the directory containing Pythia.h.")
find_library(Pythia8_LIBRARY
             NAMES pythia8
             DOC "Specify the Pythia8 library.")

#  Files are in gen folder----------------------------------------------------------
file(REAL_PATH ${CMAKE_SOURCE_DIR}/../gen SOURCE_DIR)
file(GLOB GEN_SOURCES CONFIGURE_DEPENDS  ${SOURCE_DIR}/cpp/Jl*.cxx)
add_library(Pythia8Wrap SHARED ${SOURCE_DIR}/cpp/jlPythia8.cxx ${SOURCE_DIR}/cpp/Pythia8Wrap.cxx ${GEN_SOURCES})
target_include_directories(Pythia8Wrap PRIVATE ${SOURCE_DIR} ${Pythia8_INCLUDE_DIR})
target_link_libraries(Pythia8Wrap JlCxx::cxxwrap_julia JlCxx::cxxwrap_julia_stl ${Pythia8_LIBRARY})

install(TARGETS Pythia8Wrap
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        RUNTIME DESTINATION lib)
