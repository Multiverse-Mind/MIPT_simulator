#ifndef MATAN_LECTOR_HPP_INCLUDED
#define MATAN_LECTOR_HPP_INCLUDED
#include "Matan_teacher.hpp"
#include "Lector.hpp"

class Matan_lector: public Lector, public Matan_teacher {
    public:
    Matan_lector(int age, string name) : Matan_teacher(age, name) {}

    void tell_a_shit();
};

#endif // MATAN_LECTOR_HPP_INCLUDED
