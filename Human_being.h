//
// Created by J on 26.09.2022.
//

#ifndef MIPT_SIMULATOR_HUMAN_BEING_H
#define MIPT_SIMULATOR_HUMAN_BEING_H
#include <string>
#include <iostream>

using namespace std;

class Human_being{
    int weight, hight, avg_sleep, age;
    string name;

public:
    Human_being(int age, string name): age(age), name(name) {};

    void set_weight(int a);
    void set_hight(int a);
    void set_avg_sleep(int a);
    void set_age(int a);
    void set_name(string a);

    void sleep(int a);
    void moan();

    string get_name();
    int get_age();

};

#endif //MIPT_SIMULATOR_HUMAN_BEING_H
