#ifndef OBSHESOS_TEACHER_HPP_INCLUDED
#define OBSHESOS_TEACHER_HPP_INCLUDED
#include "Teacher.hpp"
#include "Group.hpp"

class Obshesos_teacher : public Teacher {
public:
    Obshesos_teacher(string name, int age) : Teacher(name, age) {}

    void change_a_sign(Group* group);
};

#endif // OBSHESOS_TEACHER_HPP_INCLUDED