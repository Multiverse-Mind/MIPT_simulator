#ifndef TEACHER_HPP_INCLUDED
#define TEACHER_HPP_INCLUDED
#include "Human_being.h"

class Teacher: public Human_being {
    int hirsh_index;

public:
    Teacher(int age, string name) : Human_being(age, name) {};


    void teach();
    void set_hirsh_index(int a);
    int get_hirsh_index();
};

#endif // TEACHER_HPP_INCLUDED
