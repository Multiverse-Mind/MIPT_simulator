#ifndef OBSHESOS_LECTOR_HPP_INCLUDED
#define OBSHESOS_LECTOR_HPP_INCLUDED
#include "Obshesos_teacher.hpp"
#include "Lector.hpp"
class Obshesos_lector : public Lector, public Obshesos_teacher {
public:
    Obshesos_lector(int age, string name) : Obshesos_teacher(age, name) {}

    void call_Dmitriy();
};
#endif // OBSHESOS_LECTOR_HPP_INCLUDED