#ifndef TEACHER_HPP_INCLUDED
#define TEACHER_HPP_INCLUDED
#include "Human_being.h"
#include "Group.hpp"

class Teacher: public Human_being {
    int hirsh_index = 11;

public:
    Teacher(string name, int age) : Human_being(name, age) {};


    void teach(Group *group, char subject);
    void set_hirsh_index(int a);
    int get_hirsh_index();
};

#endif // TEACHER_HPP_INCLUDED
