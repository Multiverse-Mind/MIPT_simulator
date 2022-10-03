#ifndef MATAN_LECTOR_HPP_INCLUDED
#define MATAN_LECTOR_HPP_INCLUDED
#include "Matan_teacher.hpp"
#include "Lector.hpp"
#include "Group.hpp"

class Matan_lector: public Lector, public Matan_teacher {
    public:
    Matan_lector(string name, int age) : Matan_teacher(name, age) {}

    void tell_a_shit(Group *group, int chsv_loss, int mana_loss);
};

#endif // MATAN_LECTOR_HPP_INCLUDED
