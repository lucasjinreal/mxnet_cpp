cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


include_directories("./include")
link_directories("./lib")

find_package(OpenCV 3.0)
if (NOT OpenCV_FOUND)
    message(FATAL_ERROR "OpenCV > 3.0 not found.")
endif ()

add_executable(fuck
        fuck.cpp)
target_link_libraries(fuck "libmxnet_static.a" "libfuckdrive.a" ${OpenCV_LIBS})