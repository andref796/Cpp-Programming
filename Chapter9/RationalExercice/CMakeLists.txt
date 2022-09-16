cmake_minimum_required(VERSION 3.22)
project(RationalExercice)

set(CMAKE_CXX_STANDARD 14)

include_directories(Rational)

add_executable(RationalExercice
        main.cpp Rational/Rational.cpp Rational/Rational.h)
