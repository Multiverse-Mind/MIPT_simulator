#include <iostream>
#include "Matan_semer.hpp"
#include "Group.hpp"
using namespace std;

void Matan_semer::theory_testus(Group *group, int know_loss, int chsv_loss, int mana_loss){
    for (int i = 0; i < group->chillers.size(); i++){
        if (group->chillers[i].get_mana() > 0) {
            group->chillers[i].change_chsv(-chsv_loss * 2);
            group->chillers[i].change_mana(-mana_loss * 2);
            group->chillers[i].delete_know(0, know_loss);
        }
    }
    for (int i = 0; i < group->normies.size(); i++){
        if (group->normies[i].get_mana() > 0) {
            group->normies[i].change_chsv(-chsv_loss);
            group->normies[i].change_mana(-mana_loss);
            group->normies[i].delete_know(0, know_loss);
        }
    }
    for (int i = 0; i < group->danyas.size(); i++){
        if (group->danyas[i].get_mana() > 0) {
            group->danyas[i].add_know(0);
            group->danyas[i].change_mana(-mana_loss / 2);
        }
    }
    cout << "AAAAAAA the seminarian on calculus " << this->name << " arranges a theory survey again! Everyone loses"
                                                                   " chsv, mana and knowledge, except Danyas. Danyas"
                                                                   " lose mana and get knowledge." << endl;
}
