//
// Created by Женя on 27.09.2022.
//

#ifndef MIPT_SIMULATOR_STUDENT_HPP
#define MIPT_SIMULATOR_STUDENT_HPP
#include "Human_being.h"


class Student: public Human_being {
    float avg;
    char knowledge[3] = {32, 32, 32}; // Нулевой элемент - знания по матану, первый элемент - знания по
    // общесосу, второй элемент - знания по лабам

public:
    Student(string name, int age, float avg) : Human_being(name, age), avg(avg) {}

    void set_know(int i, char a);
    void set_avg(char a);


    int get_know(int i);
    float get_avg();


    void add_know(int i);
};

#endif //MIPT_SIMULATOR_STUDENT_HPP
