//
// Created by Женя on 27.09.2022.
//

#ifndef MIPT_SIMULATOR_STUDENT_HPP
#define MIPT_SIMULATOR_STUDENT_HPP
#include "Human_being.h"


class Student: public Human_being {
    char avg;
    char knowledge[3];

public:
    Student(int age, string name) : Human_being(age, name), knowledge({32, 32, 32 })  {}

    void set_know(int i, char a);
    void set_avg(char a);


    char get_know(int i);
    char get_avg();


    void add_know(int i);
};

#endif //MIPT_SIMULATOR_STUDENT_HPP
