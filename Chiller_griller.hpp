//
// Created by Женя on 27.09.2022.
//

#ifndef MIPT_SIMULATOR_CHILLER_GRILLER_HPP
#define MIPT_SIMULATOR_CHILLER_GRILLER_HPP
#include "Student.hpp"

class Chiller_griller : public Student {
    int num_of_gals = 1;

public:
    Chiller_griller(string name, int age): Student(name, age, 5) {}

    void take_a_leap_year();

    void set_num_of_gals(int a);

    int get_num_of_gals();


};


#endif //MIPT_SIMULATOR_CHILLER_GRILLER_HPP
