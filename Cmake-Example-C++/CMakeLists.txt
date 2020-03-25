cmake_minimum_required(VERSION 3.5.1)
project (Dragon_test)


set(CMAKE_CXX_FLAGS "-std=c++14 -g0 -O3 -Wall -Wextra -Werror")

# Bring the header files into the project
include_directories(include)

#Can manually add the sources...
#set(SOURCES src/main.cpp src/Dragon.cpp)

# but lets make it easier...
file(GLOB SOURCES "src/*.cpp")


add_executable(dragexe ${SOURCES})
