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
    int avg_sleepage; //average amount of minutes you sleep
    int age;
    short sleep_schedule[7] = {360, 360, 360, 360, 360, 360, 360};
                      //arr with durations of ur sleep for every day on last week

public:
    string name;

    Human_being(string name, int age): name(name), age(age) {};

    void sleep(short a);
    void moan();

    void set_height(int a), set_weight(int a), set_avg_sleepage(), set_age(int a);
    void set_sleep_schedule(short a[7]);
    void set_name(string a);


    int get_height(), get_weight(), get_avg_sleepage(), get_age();
    short * get_sleep_schedule();
    string get_name();


};

#endif //MIPT_SIMULATOR_HUMAN_BEING_H
