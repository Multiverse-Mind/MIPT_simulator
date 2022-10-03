#ifndef OBSHESOS_SEMER_HPP_INCLUDED
#define OBSHESOS_SEMER_HPP_INCLUDED
#include "Obshesos_teacher.hpp"
#include "Semer.hpp"
#include "Group.hpp"

class Obshesos_semer : public Semer, public Obshesos_teacher {
public:
    Obshesos_semer(string name, int age) : Obshesos_teacher(name, age) {}

    void tell_obshesosy_solution(Group* group, int chsv_change, int mana_change);
};
#endif // OBSHESOS_SEMER_HPP_INCLUDED
