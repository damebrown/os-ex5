cmake_minimum_required(VERSION 3.12)
project(ex5)

set(CMAKE_CXX_STANDARD 11)

add_executable(ex5
        Client.cpp
        Client.h
        Server.cpp
        Server.h
        FileApp.cpp
        prints.h
        )