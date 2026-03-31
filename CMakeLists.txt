cmake_minimum_required(VERSION 4.0)
project(Hangman_exam)

set(CMAKE_CXX_STANDARD 20)

add_executable(Hangman_exam main.cpp
        Game.h
        DrawHangman.h
        Statistics.h
        WordGeneration.h
        Game.cpp
        DrawHangman.cpp
        WordGeneration.cpp
        Statistics.cpp)
