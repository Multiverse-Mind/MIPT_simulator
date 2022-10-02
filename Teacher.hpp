#ifndef TEACHER_HPP_INCLUDED
#define TEACHER_HPP_INCLUDED
#include <string>
#include "Human_being.h"
#include "Group.hpp"

class Teacher: public Human_being {
    int hirsh_index = 12;

public:
    Teacher(string name, int age) : Human_being(name, age) {};

    void teach(Group *group, char subject, string pair_type, int mana_change);
    void tell_about_hirsch_index(Group *group);

    void set_hirsh_index(int a);

    int get_hirsh_index();
};

#endif // TEACHER_HPP_INCLUDED
