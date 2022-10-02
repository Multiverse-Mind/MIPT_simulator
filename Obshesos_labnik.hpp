#ifndef OBSHESOS_LABNIK_HPP_INCLUDED
#define OBSHESOS_LABNIK_HPP_INCLUDED
#include "Obshesos_teacher.hpp"

class Obshesos_labnik : public Obshesos_teacher {
public:
    Obshesos_labnik(string name, int age) : Obshesos_teacher(name, age) {}

    void make_redo_laba();
};
#endif // OBSHESOS_LABNIK_HPP_INCLUDED
