cmake_minimum_required (VERSION 2.6)
project (FeatureEnforcement)

# boost
set(BOOST_ROOT "$ENV{HOME}/homebrew/Cellar/boost/1.50.0")
find_package(BOOST 1.50 REQUIRED mpl)
include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIRS})

set(CMAKE_CXX_FLAGS "-std=c++0x -stdlib=libc++ -g -Wall")
# Linker: stdlib=libc++ 

add_executable(fe main.cpp)

