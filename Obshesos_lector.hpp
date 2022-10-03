#ifndef OBSHESOS_LECTOR_HPP_INCLUDED
#define OBSHESOS_LECTOR_HPP_INCLUDED
#include "Obshesos_teacher.hpp"
#include "Lector.hpp"
#include "Group.hpp"
class Obshesos_lector : public Lector, public Obshesos_teacher {
public:
    Obshesos_lector(string name, int age) : Obshesos_teacher(name, age) {}

    void call_Dmitriy(Group* group, int mana_profit);
};
#endif // OBSHESOS_LECTOR_HPP_INCLUDED