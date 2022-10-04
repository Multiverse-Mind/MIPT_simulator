//
// Created by J on 26.09.2022.
//

#include <iostream>
#include <string>
#include "Human_being.h"
using namespace std;


void Human_being::moan() {
    cout << "Yamete" << endl;
}

void Human_being::sleep(short a) {
    for (int i = 0; i < 6; ++i) {
        this->sleep_schedule[i] = this->sleep_schedule[i+1];
    }
    this->sleep_schedule[6] = a;

    this->set_avg_sleepage();
}



void Human_being::set_height(int in_height) {
    this->height = in_height;
}

void Human_being::set_weight(int in_weight) {
    this->weight = in_weight;
}

void Human_being::set_age(int in_age) {
    this->age = in_age;
}

void Human_being::set_name(string in_name) {
    this->name = in_name;
}

/*
void Human_being::set_avg_sleep(int in_set_avg_sleep) {
    this->avg_sleepage = in_set_avg_sleep;
}
*/

void Human_being::set_sleep_schedule(short a[7]) {
    for (int i = 0; i < 7; ++i) {
        this->sleep_schedule[i] = a[i];
    }

    this->set_avg_sleepage();
}

void Human_being::set_avg_sleepage() {
    short tmp = 0;
    for (int i = 0; i < 7; ++i) {
        tmp += this->sleep_schedule[i];
    }
    this->avg_sleepage = int(tmp/6);
}



string Human_being::get_name() {
    return this->name;
}

int Human_being::get_age() {
    return this->age;
}

int Human_being::get_height() {
    return this->height;
}

int Human_being::get_weight() {
    return this->weight;
}

int Human_being::get_avg_sleepage() {
    return this->avg_sleepage;
}

short * Human_being::get_sleep_schedule() {
    return this->sleep_schedule;
}


/*
int main() {
    cout << "sdasd" << endl;
    Human_being Ger("gerold", 5);
    Ger.moan();
    Ger.set_age(6);
    Ger.set_name("Germany");
    cout << Ger.get_age() << ' ' << Ger.get_name() << endl;
    //Ger.sleep(5);
    cout << Ger.get_sleep_schedule()[0] << endl;

}
*/