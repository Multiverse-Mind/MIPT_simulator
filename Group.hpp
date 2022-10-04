//
// Created by Sasha on 02.10.2022.
//

#ifndef MIPT_SIMULATOR_GROUP_HPP
#define MIPT_SIMULATOR_GROUP_HPP
#include <vector>
#include "Chiller_griller.hpp"
#include "Normie.hpp"
#include "Danya.hpp"

struct Group{
    vector<Chiller_griller> chillers;
    vector<Normie> normies;
    vector<Danya> danyas;

    void pb(Chiller_griller a), pb(Normie a), pb(Danya a);
};

#endif //MIPT_SIMULATOR_GROUP_HPP
