//
// Created by J on 26.09.2022.
//

#ifndef MIPT_SIMULATOR_HUMAN_BEING_H
#define MIPT_SIMULATOR_HUMAN_BEING_H
#include <string>
#include <iostream>

using namespace std;

class Human_being{
    int weight = 60;
    int height = 160;
    int avg_sleepage = 0;
    int age;

public:
    string name;
    Human_being(string name, int age): name(name), age(age) {};

    void set_weight(int a);
    void set_height(int a);
    void set_avg_sleep(int a);
    void set_age(int a);
    void set_name(string a);

    void sleep(int a);
    void moan();

    string get_name();
    int get_age();

};

#endif //MIPT_SIMULATOR_HUMAN_BEING_H
