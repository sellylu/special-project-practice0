cmake_minimum_required(VERSION 2.8)
project( practice0 )
find_package( OpenCV )
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( practice0 main.cpp )
target_link_libraries( practice0 ${OpenCV_LIBS} )
