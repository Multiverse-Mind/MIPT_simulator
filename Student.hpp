//
// Created by Женя on 27.09.2022.
//

#ifndef MIPT_SIMULATOR_STUDENT_HPP
#define MIPT_SIMULATOR_STUDENT_HPP
#include "Human_being.h"


class Student: public Human_being {
    int avg;

public:
    Student(int age, string name) : Human_being(age, name) {}
    void set_avg(int a);
    int get_avg();
};

#endif //MIPT_SIMULATOR_STUDENT_HPP
