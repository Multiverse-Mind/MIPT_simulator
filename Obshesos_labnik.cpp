#include <iostream>
#include "Obshesos_labnik.hpp"
#include "Group.hpp"
using namespace std;

void Obshesos_labnik::make_redo_laba(Group* group, int chsv_change, int mana_change){
    for (int i = 0; i < group->chillers.size(); i++) {
        group->chillers[i].change_chsv(chsv_change * 3);
        group->chillers[i].change_mana(mana_change * 3);
    }
    for (int i = 0; i < group->normies.size(); i++) {
        group->normies[i].change_chsv(chsv_change*2);
        group->normies[i].change_mana(mana_change*2);
    }
    for (int i = 0; i < group->danyas.size(); i++) {
        group->danyas[i].change_chsv(chsv_change);
        group->danyas[i].change_mana(mana_change);
    }
    cout << "Labnik" << this->name << "says: if you don't redo it, you will go to Ukraine!" << endl;
}
