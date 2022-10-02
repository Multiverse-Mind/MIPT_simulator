#include <iostream>
#include "Matan_semer.hpp"
#include "Group.hpp"
using namespace std;

void Matan_semer::theory_testus(Group *group, int chsv_change, int mana_change){
    for (int i = 0; i < group->chillers.size(); i++){
        group->chillers[i].change_chsv(chsv_change * 2);
        group->chillers[i].change_mana(mana_change * 2);
        for (int j = 0; j < 6; j++) { group->chillers[i].delete_know(0); }
    }
    for (int i = 0; i < group->normies.size(); i++){
        group->normies[i].change_chsv(chsv_change);
        group->normies[i].change_mana(mana_change);
        for (int j = 0; j < 3; j++) { group->normies[i].delete_know(0); }
    }
    for (int i = 0; i < group->danyas.size(); i++){
        group->danyas[i].add_know(0);
        group->danyas[i].change_mana(mana_change / 2);
    }
    cout << "AAAAAAA the seminarian on calculus " << this->name << " arranges a theory survey again! Everyone loses"
                                                                   " chsv, mana and knowledge, except Danyas. Danyas"
                                                                   " lose mana and get knowledge." << endl;
}
