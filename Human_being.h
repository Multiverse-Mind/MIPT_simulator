//
// Created by J on 26.09.2022.
//

#ifndef MIPT_SIMULATOR_HUMAN_BEING_H
#define MIPT_SIMULATOR_HUMAN_BEING_H
#include <string>

class Human_being{
    int weight, hight, avg_sleep, age;
    string name;

public:
    Human_being(int age, string name): age(age), name(name) {};

    void set_weight();
    void set_hight();
    void set_avg_sleep();
    void set_age();
    void set_name();

    void sleep();
    void moan();

};

#endif //MIPT_SIMULATOR_HUMAN_BEING_H
