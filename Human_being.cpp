//
// Created by J on 26.09.2022.
//

#include <iostream>
#include <string>
#include "Human_being.h"
using namespace std;



void Human_being::set_weight(int in_weight) {
    this->weight = in_weight;
}

void Human_being::set_hight(int in_hight) {
    this->hight = in_hight;
}

void Human_being::set_age(int in_age) {
    this->age = in_age;
}

void Human_being::set_name(string in_name) {
    this->name = in_name;
}

void Human_being::set_avg_sleep(int in_set_avg_sleep) {
    this->avg_sleep = in_set_avg_sleep;
}

void Human_being::moan() {
    cout << "AAAAUUUUUGHHHHHHHHH" << endl;
}

string Human_being::get_name() {
    return this->name;
}

int Human_being::get_age() {
    return this->age;
}


int main() {
    cout << "sdasd" << endl;
    Human_being Ger(5, "gerold");
    Ger.moan();
    Ger.set_age(6);
    Ger.set_name("Germany");
    cout << Ger.get_age() << ' ' << Ger.get_name() << endl;


}
