#include <iostream>
#include "Lector.hpp"
using namespace std;

void Lector::get_late(Group *group, int mana_profit){
    for (int i = 0; i < group->chillers.size(); i++){
        if (group->chillers[i].get_mana() > 0){
        group->chillers[i].change_mana(mana_profit);}
    }
    for (int i = 0; i < group->normies.size(); i++){
        if (group->normies[i].get_mana() > 0) {
        group->normies[i].change_mana(mana_profit);}
    }
    for (int i = 0; i < group->danyas.size(); i++){
        if (group->danyas[i].get_mana() > 0) {
        group->danyas[i].change_mana(mana_profit);}
    }
    cout << "The lecturer gets late which adds a little bit of mana to everyone who came." << endl;
}
