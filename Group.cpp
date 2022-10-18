//
// Created by Женя on 04.10.2022.
//
#include "Group.hpp"
#include <iostream>

using namespace std;

void Group::pb(Danya a) {
    this->danyas.push_back(a);
    //kids_count();
}

void Group::pb(Chiller_griller a) {
    this->chillers.push_back(a);
    //kids_count();
}

void Group::pb(Normie a) {
    this->normies.push_back(a);
    //kids_count();
}
/*
void Group::filter(const Group &group) {
    for (auto i: group.chillers) {
        if (i.get_mana() > 0) {
            this->pb(i);
        }
    }
    for (auto i : group.normies) {
        if (i.get_mana() > 0) {
            this->pb(i);
        }
    }
    for (auto i : group.danyas) {
        if (i.get_mana() > 0) {
            this->pb(i);
        }
    }
}

void Group::kids_count() {
    for (int i = 0; i < this->chillers.size(); ++i) {
        kids.push_back(&this->chillers[i]);
    }
    for (int i = 0; i < this->normies.size(); ++i) {
        kids.push_back(&this->chillers[i]);
    }
    for (int i = 0; i < this->danyas.size(); ++i) {
        kids.push_back(&this->danyas[i]);
    }
}
*/