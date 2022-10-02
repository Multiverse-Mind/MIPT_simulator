//
// Created by Женя on 27.09.2022.
//

#include <iostream>
#include "Student.hpp"

void Student::set_avg(char a) {
    this->avg = a;
}

float Student::get_avg() {
    return avg;
}

void Student::set_know(int i, char a) {
    this->knowledge[i] = a;
}

int Student::get_know(int i) {
    return this->knowledge[i];
}


void Student::add_know(int i) {
    int deg = 0;
    char know = knowledge[i];

    //cout << int(know) << endl;

    while ((1 << deg) < (64 - know)){
        ++deg;
    }

    know += deg;
    knowledge[i] = know;

    //cout << int(know) << endl;

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