//
// Created by Женя on 04.10.2022.
//
#include "Group.hpp"
#include <iostream>

using namespace std;

void Group::pb(Danya a) {
    this->danyas.push_back(a);
}

void Group::pb(Chiller_griller a) {
    this->chillers.push_back(a);
}

void Group::pb(Normie a) {
    this->normies.push_back(a);
}