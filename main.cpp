//
// Created by Sasha on 02.10.2022.
//
#include <iostream>
#include "Danya.hpp"
#include "Normie.hpp"
#include "Chiller_griller.hpp"
#include "Group.hpp"
#include "Matan_semer.hpp"
using namespace std;


int main(){
    Chiller_griller a("", 0);
    Chiller_griller b("", 0);
    Normie c("", 0);
    Normie d("", 0);
    Danya e("", 0);
    Danya f("", 0);
    Matan_semer A("", 0);
    Group group;
    group.chillers.push_back(a);
    group.chillers.push_back(b);
    group.normies.push_back(c);
    group.normies.push_back(d);
    group.danyas.push_back(e);
    group.danyas.push_back(f);
    for (int i = 0; i < group.chillers.size(); i++){
        cout << group.chillers[i].get_know(0) << endl;
    }
    for (int i = 0; i < group.normies.size(); i++){
        cout << group.normies[i].get_know(0) << endl;
    }
    for (int i = 0; i < group.danyas.size(); i++){
        cout << group.danyas[i].get_know(0) << endl;
    }
    cout << endl;
    A.teach(&group, 0);
    for (int i = 0; i < group.chillers.size(); i++){
        cout << group.chillers[i].get_know(0) << endl;
    }
    for (int i = 0; i < group.normies.size(); i++){
        cout << group.normies[i].get_know(0) << endl;
    }
    for (int i = 0; i < group.danyas.size(); i++){
        cout << group.danyas[i].get_know(0) << endl;
    }
    return 0;
}