//
// Created by Женя on 27.09.2022.
//

#ifndef MIPT_SIMULATOR_STUDENT_HPP
#define MIPT_SIMULATOR_STUDENT_HPP
#include "Human_being.h"


class Student: public Human_being {
    float avg;
    int chsv = 0;
    int mana;
    char knowledge[3] = {32, 32, 32}; // Нулевой элемент - знания по матану, первый элемент - знания по
    // общесосу, второй элемент - знания по лабам

public:
    Student(string name, int age, float avg, int mana) : Human_being(name, age), avg(avg), mana(mana) {}

    void set_know(int i, char a);
    void set_avg(char a);
    void set_chsv(int a);
    void set_mana(int a);


    int get_know(int i);
    float get_avg();
    int get_chsv();
    int get_mana();


    void add_know(int i);
    void change_chsv(int a);
    void change_mana(int a);


    void delete_know(int i, int a);
};

#endif //MIPT_SIMULATOR_STUDENT_HPP
