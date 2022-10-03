#include <iostream>
#include "Obshesos_lector.hpp"
#include "Group.hpp"
using namespace std;

void Obshesos_lector::call_Dmitriy(Group* group, int mana_change) {
    for (int i = 0; i < group->chillers.size(); i++) {
        group->chillers[i].change_mana(-mana_change * 5);
    }
    for (int i = 0; i < group->normies.size(); i++) {
        group->normies[i].change_mana(-mana_change*5);
    }
    for (int i = 0; i < group->danyas.size(); i++) {
        group->danyas[i].change_mana(-mana_change *5);
    }
    cout << "The lecturer" << this->name << "invites Dmitry to show boiling water" << endl;
}
