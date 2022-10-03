#include <iostream>
#include "Lector.hpp"
#include "Group.hpp"
using namespace std;

void Lector::get_late(Group *group, int mana_profit){
    for (int i = 0; i < group->chillers.size(); i++){
        group->chillers[i].change_mana(mana_profit);
    }
    for (int i = 0; i < group->normies.size(); i++){
        group->normies[i].change_mana(mana_profit);
    }
    for (int i = 0; i < group->danyas.size(); i++){
        group->danyas[i].change_mana(mana_profit);
    }
    cout << "The lecturer gets late which adds a little bit of mana to everyone who came." << endl;
}
