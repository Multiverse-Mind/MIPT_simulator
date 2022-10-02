#ifndef OBSHESOS_SEMER_HPP_INCLUDED
#define OBSHESOS_SEMER_HPP_INCLUDED
#include "Obshesos_teacher.hpp"
#include "Semer.hpp"

class Obshesos_semer : public Semer, public Obshesos_teacher {
public:
    Obshesos_semer(string name, int age) : Obshesos_teacher(name, age) {}

    void tell_obshesosy_solution();
};
#endif // OBSHESOS_SEMER_HPP_INCLUDED
