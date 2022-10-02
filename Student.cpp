//
// Created by Женя on 27.09.2022.
//

#include <iostream>
#include "Student.hpp"

void Student::set_avg(char a) {
    this->avg = a;
}

float Student::get_avg() {
    return this->avg;
}

void Student::set_chsv(int a) {
    this->chsv = a;
}

int Student::get_chsv() {
    return this->chsv;
}

void Student::change_chsv(int i) {
    this->chsv = this->chsv + i;
}

void Student::set_mana(int a) {
    this->mana = a;
}

int Student::get_mana() {
    return this->mana;
}

void Student::change_mana(int i) {
    this->mana = this->mana + i;
}

void Student::set_know(int i, char a) {
    this->knowledge[i] = a;
}

int Student::get_know(int i) {
    return this->knowledge[i];
}

void Student::add_know(int i) {
    int deg = 0;
    char know = this->knowledge[i];

    //cout << int(know) << endl;

    while ((1 << deg) < (64 - know)){
        ++deg;
    }

    know += deg;
    this->knowledge[i] = know;

    //cout << int(know) << endl;

}

void Student::delete_know(int i) {
    this->knowledge[i]--;
}

/*
int main(){
    Student Jenny(5, "Jenny");

    Jenny.set_know(0, 0);
    for (int i = 0; i < 14; ++i) {

    Jenny.add_know(0);}


    cout << int(Jenny.get_know(0)) << endl;
}
*/