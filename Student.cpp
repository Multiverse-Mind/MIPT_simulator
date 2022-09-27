//
// Created by Женя on 27.09.2022.
//

#include <iostream>
#include "Student.hpp"

void Student::set_avg(int a) {
    this->avg = a;
}

int Student::get_avg() {
    return avg;
}
/*
int main(){
    Student Jenny(5, "Jenny");
    Jenny.set_avg(8.0);
    cout << Jenny.get_avg() <<endl ;
}
*/