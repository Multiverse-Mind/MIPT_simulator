#ifndef MATAN_SEMER_HPP_INCLUDED
#define MATAN_SEMER_HPP_INCLUDED
#include "Matan_teacher.hpp"
#include "Semer.hpp"

class Matan_semer: public Semer, public Matan_teacher {
    public:
    Matan_semer(string name, int age) : Matan_teacher(name, age) {}

    void theory_testus();
};


#endif // MATAN_SEMER_HPP_INCLUDED
