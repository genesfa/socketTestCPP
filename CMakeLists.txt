cmake_minimum_required(VERSION 3.20)
project(socketTest)

set(CMAKE_CXX_STANDARD 14)

add_executable(socketTest main.cpp TestZMQ.cpp TestZMQ.h)
target_link_libraries(socketTest PUBLIC zmq)
