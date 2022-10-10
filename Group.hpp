//
// Created by Sasha on 02.10.2022.
//

#ifndef MIPT_SIMULATOR_GROUP_HPP
#define MIPT_SIMULATOR_GROUP_HPP
#include <vector>
#include "Chiller_griller.hpp"
#include "Normie.hpp"
#include "Danya.hpp"
#include <iostream>

struct Group{
    vector<Chiller_griller> chillers;
    vector<Normie> normies;
    vector<Danya> danyas;
    vector<Student*> kids;

    void pb(Chiller_griller a), pb(Normie a), pb(Danya a);
    void kids_count();

    void filter(const Group & group);
};

#endif //MIPT_SIMULATOR_GROUP_HPP
