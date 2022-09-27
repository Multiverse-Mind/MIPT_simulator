#ifndef MATAN_TEACHER_HPP_INCLUDED
#define MATAN_TEACHER_HPP_INCLUDED
#include "Teacher.hpp"

class Matan_teacher: public Teacher {
    public:
    Matan_teacher(int age, string name) : Teacher(age, name) {}

    void prove_FubiniT();
};

#endif // MATAN_TEACHER_HPP_INCLUDED
