//
// Created by Женя on 27.09.2022.
//

#ifndef MIPT_SIMULATOR_NORMIE_HPP
#define MIPT_SIMULATOR_NORMIE_HPP
#include "Student.hpp"

class Normie : public Student {

public:
    Normie (string name, int age): Student(name, age, 7.25, 100) {}

    void wake_up_for_para();
};

#endif //MIPT_SIMULATOR_NORMIE_HPP
