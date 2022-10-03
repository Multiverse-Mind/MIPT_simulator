#include <iostream>
#include "Matan_lector.hpp"
#include "Group.hpp"
using namespace std;

void Matan_lector::tell_a_shit(Group *group, int chsv_loss, int mana_loss){
    for (int i = 0; i < group->chillers.size(); i++){
        group->chillers[i].change_chsv(-chsv_loss * 2);
        group->chillers[i].change_mana(-mana_loss * 2);
    }
    for (int i = 0; i < group->normies.size(); i++){
        group->normies[i].change_chsv(-chsv_loss);
        group->normies[i].change_mana(-mana_loss);
    }
    for (int i = 0; i < group->danyas.size(); i++){
        group->danyas[i].add_know(0);
        group->danyas[i].change_mana(-mana_loss / 2);
    }
    cout << "Damn, the calculus lecturer " << this->name << " says some bullshit again, no one understands anything"
                                                            " (this does not apply to Danyas). Everyone loses chsv and"
                                                            " mana, except Danyas. Danyas lose mana and get knowledge."
                                                            << endl;
}
