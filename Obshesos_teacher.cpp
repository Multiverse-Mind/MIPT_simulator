#include <iostream>
#include "Obshesos_teacher.hpp"
#include "Group.hpp"
using namespace std;

void Obshesos_teacher::change_a_sign(Group* group, int obshesos_type, int know_loss, int mana_profit, int chsv_profit) { // obshesos_type = 1 - обычный общесос, obshesos_type = 2 - лабы
    for (int i = 0; i < group->chillers.size(); i++) {
        if (group->chillers[i].get_mana() > 0) {
            group->chillers[i].delete_know(obshesos_type, know_loss);
            group->chillers[i].change_mana(mana_profit);
        }
    }
    for (int i = 0; i < group->normies.size(); i++) {
        if (group->normies[i].get_mana() > 0) {
            group->normies[i].change_mana(mana_profit);
        }
    }
    for (int i = 0; i < group->danyas.size(); i++) {
        if (group->danyas[i].get_mana() > 0) {
            group->danyas[i].change_chsv(chsv_profit);
        }
    } 
    cout << "Holy shit, the teacher of obshesos " << this->name << " changes the limits of integration. Chillers lose"
                                                                   " knowledge in this type of obshesos. Chillers and"
                                                                   " normies gain mana (Hm, obshesos."
                                                                   " AHAHAHAHAHAHAHAHA!). Danyas gain chsv because"
                                                                   " they understand this." << endl;
}

