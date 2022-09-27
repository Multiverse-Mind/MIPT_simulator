cmake_minimum_required(VERSION 3.21)
project(MIPT_simulator)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(MIPT_simulator
        Human_being.cpp
        Human_being.h
        Lector.cpp
        Lector.hpp
        Matan_lector.cpp
        Matan_lector.hpp
        Matan_semer.cpp
        Matan_semer.hpp
        Matan_teacher.cpp
        Matan_teacher.hpp
        Obshesos_labnik.cpp
        Obshesos_labnik.hpp
        Obshesos_lector.cpp
        Obshesos_lector.hpp
        Obshesos_semer.cpp
        Obshesos_semer.hpp
        Obshesos_teacher.cpp
        Obshesos_teacher.hpp
        Semer.cpp
        Semer.hpp
        Teacher.cpp
        Teacher.hpp Student.hpp Student.cpp Danya.cpp Danya.hpp Normie.cpp Normie.hpp)
