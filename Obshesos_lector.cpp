#include <iostream>
#include "Obshesos_lector.hpp"
#include "Group.hpp"
using namespace std;

void Obshesos_lector::call_Dmitriy(Group* group, int mana_profit) {
    for (int i = 0; i < group->chillers.size(); i++) {
        if (group->chillers[i].get_mana() > 0) {
            group->chillers[i].change_mana(mana_profit * 5);
        }
    }
    for (int i = 0; i < group->normies.size(); i++) {
        if (group->normies[i].get_mana() > 0) {
            group->normies[i].change_mana(mana_profit * 5);
        }
    }
    for (int i = 0; i < group->danyas.size(); i++) {
        if (group->danyas[i].get_mana() > 0) {
            group->danyas[i].change_mana(mana_profit * 5);
        }
    }
    cout << "Obshesos lecturer " << this->name << " invites Dmitry to show boiling water. Plus super extra mana for"
                                                  " everyone who came." << endl;
}
