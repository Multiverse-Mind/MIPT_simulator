//
// Created by Sasha on 02.10.2022.
//
#include <iostream>
#include "Danya.hpp"
#include "Normie.hpp"
#include "Chiller_griller.hpp"
#include "Group.hpp"
#include "Matan_semer.hpp"
#include "Matan_lector.hpp"
#include "Obshesos_labnik.hpp"
#include "Obshesos_lector.hpp"
#include "Obshesos_semer.hpp"
using namespace std;


int main(){
    Chiller_griller a("a", 0);
    Chiller_griller b("b", 0);
    Normie c("c", 0);
    Normie d("d", 0);
    Danya e("e", 0);
    Danya f("f", 0);
    Obshesos_semer A("A", 0);
    Group group;
    group.chillers.push_back(a);
    group.chillers.push_back(b);
    group.normies.push_back(c);
    group.normies.push_back(d);
    group.danyas.push_back(e);
    group.danyas.push_back(f);
    cout << "Knowledge\tChSV\tMana" << endl;
    for (int i = 0; i < group.chillers.size(); i++){
        cout << group.chillers[i].get_know(1) << "\t" << group.chillers[i].get_chsv() << "\t" <<
        group.chillers[i].get_mana() << endl;
    }
    for (int i = 0; i < group.normies.size(); i++){
        cout << group.normies[i].get_know(1) << "\t" << group.normies[i].get_chsv() << "\t" <<
        group.normies[i].get_mana() << endl;
    }
    for (int i = 0; i < group.danyas.size(); i++){
        cout << group.danyas[i].get_know(1) << "\t" << group.danyas[i].get_chsv() << "\t" <<
        group.danyas[i].get_mana() << endl;
    }
    cout << endl;

    cout << endl;
    cout << "Knowledge\tChSV\tMana" << endl;
    for (int i = 0; i < group.chillers.size(); i++){
        cout << group.chillers[i].get_know(1) << "\t" << group.chillers[i].get_chsv() << "\t" <<
        group.chillers[i].get_mana() << endl;
    }
    for (int i = 0; i < group.normies.size(); i++){
        cout << group.normies[i].get_know(1) << "\t" << group.normies[i].get_chsv() << "\t" <<
        group.normies[i].get_mana() << endl;
    }
    for (int i = 0; i < group.danyas.size(); i++){
        cout << group.danyas[i].get_know(1) << "\t" << group.danyas[i].get_chsv() << "\t" <<
        group.danyas[i].get_mana() << endl;
    }
    return 0;
}