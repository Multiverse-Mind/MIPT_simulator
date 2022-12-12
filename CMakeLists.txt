cmake_minimum_required(VERSION 3.21)
project(MIPT_simulator)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(MIPT_simulator
        teachers/Lector.cpp
        teachers/Lector.hpp
        Human_being.cpp
        Human_being.h
        teachers/Matan_lector.cpp
        teachers/Matan_lector.hpp
        teachers/Matan_semer.cpp
        teachers/Matan_semer.hpp
        teachers/Matan_teacher.cpp
        teachers/Matan_teacher.hpp
        teachers/Obshesos_labnik.cpp
        teachers/Obshesos_labnik.hpp
        teachers/Obshesos_lector.cpp
        teachers/Obshesos_lector.hpp
        teachers/Obshesos_semer.cpp
        teachers/Obshesos_semer.hpp
        teachers/Obshesos_teacher.cpp
        teachers/Obshesos_teacher.hpp
        teachers/Semer.cpp
        teachers/Semer.hpp
        teachers/Teacher.cpp
        teachers/Teacher.hpp
        students/Student.hpp
        students/Student.cpp
        students/Danya.cpp
        students/Danya.hpp
        students/Normie.cpp
        students/Normie.hpp
        students/Chiller_griller.cpp
        students/Chiller_griller.hpp
        main.cpp
        Group.hpp
        Group.cpp
        Institute.hpp)
