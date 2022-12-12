#ifndef MATAN_TEACHER_HPP_INCLUDED
#define MATAN_TEACHER_HPP_INCLUDED
#include "Teacher.hpp"
#include "../Group.hpp"

class Matan_teacher: public Teacher {
    public:
    Matan_teacher(string name, int age) : Teacher(name, age) {}

    void prove_FubiniT(Group *group, int mana_loss);
};

#endif // MATAN_TEACHER_HPP_INCLUDED
