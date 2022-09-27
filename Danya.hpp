//
// Created by Женя on 27.09.2022.
//

#ifndef MIPT_SIMULATOR_DANYA_HPP
#define MIPT_SIMULATOR_DANYA_HPP
#include "Student.hpp"
#include <iostream>

class Danya : public Student{

public:
    Danya(int age, string name): Student(age, name) {}

    void correct_a_teacher();
};

#endif //MIPT_SIMULATOR_DANYA_HPP
