#include <iostream>
#include "Matan_teacher.hpp"
using namespace std;

void Matan_teacher::prove_FubiniT(Group *group, int mana_loss){
    for (int i = 0; i < group->chillers.size(); i++){
        if (group->chillers[i].get_mana() > 0) {
            group->chillers[i].add_know(0);
            group->chillers[i].change_mana(-mana_loss);
        }
    }
    for (int i = 0; i < group->normies.size(); i++){
        if (group->normies[i].get_mana() > 0) {
            group->normies[i].add_know(0);
            group->normies[i].change_mana(-mana_loss);
        }
    }
    for (int i = 0; i < group->danyas.size(); i++){
        if (group->danyas[i].get_mana() > 0) {
            group->danyas[i].add_know(0);
            group->danyas[i].change_mana(-mana_loss);
        }
    }
    cout << "Holy shit, the teacher of calculus " << this->name << " proves the Fubibi's theorem. Plus extra knowledge and"
                                                                   " minus extra mana for everyone who came." << endl;
}
