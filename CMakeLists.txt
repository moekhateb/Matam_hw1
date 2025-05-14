cmake_minimum_required(VERSION 3.29.6)
project(Matam_hw1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Matam_hw1
        BlockChain.cpp
        BlockChain.h
        Transaction.cpp
        Transaction.h
        Utilities.cpp
        Utilities.h)
