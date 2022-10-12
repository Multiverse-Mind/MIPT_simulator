#include <iostream>
#include "Obshesos_semer.hpp"
#include "Group.hpp"
using namespace std;

void Obshesos_semer::tell_obshesosy_solution(Group* group, int chsv_profit, int mana_loss) {
    for (int i = 0; i < group->chillers.size(); i++) {
        if (group->chillers[i].get_mana() > 0) {
            group->chillers[i].change_chsv(chsv_profit * 5);
            group->chillers[i].change_mana(-mana_loss * 2);
        }
    }
    for (int i = 0; i < group->normies.size(); i++) {
        if (group->normies[i].get_mana() > 0) {
            group->normies[i].change_chsv(chsv_profit);
            group->normies[i].change_mana(-mana_loss);
        }
    }
    for (int i = 0; i < group->danyas.size(); i++) {
        if (group->danyas[i].get_mana() > 0) {
            group->danyas[i].add_know(1);
            group->danyas[i].change_mana(-mana_loss / 2);
        }
    }
    cout << "The seminarian " << this->name << " says that in physics there is decomposition only up to the first"
                                               " order. Minus mana for everyone who came. Chillers and normies feel"
                                               " THE SCIENCE so they gain extra chsv (super extra chsv for chillers"
                                               " cause they think they're ascended now). Danyas get some new knowledge"
                                               " in obshesos because only they take this as knowledge." << endl;
}
