#ifndef MATAN_SEMER_HPP_INCLUDED
#define MATAN_SEMER_HPP_INCLUDED
#include "Matan_teacher.hpp"
#include "Semer.hpp"

class Matan_semer: public Semer, public Matan_teacher {
    public:
    Matan_semer(int age, string name) : Matan_teacher(age, name) {}

    void theory_testus();
};


#endif // MATAN_SEMER_HPP_INCLUDED
