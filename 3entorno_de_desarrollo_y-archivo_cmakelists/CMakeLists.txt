cmake_minimum_required(VERSION 3.29)
project(3entorno_de_desarrollo_y_archivo_cmakelists)

set(CMAKE_CXX_STANDARD 20)

add_executable(3entorno_de_desarrollo_y_archivo_cmakelists main.cpp)

include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        7.1.3
)

FetchContent_MakeAvailable(fmt)
target_link_libraries(3entorno_de_desarrollo_y_archivo_cmakelists PRIVATE fmt::fmt)
