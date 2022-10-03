#include <iostream>
#include "Obshesos_semer.hpp"
#include "Group.hpp"
using namespace std;

void Obshesos_semer::tell_obshesosy_solution(Group* group, int chsv_change, int mana_change) {
    for (int i = 0; i < group->chillers.size(); i++) {
        group->chillers[i].change_chsv(-chsv_change * 5); //Чилер стал думать, что он умный
        group->chillers[i].change_mana(mana_change * 2);
    }
    for (int i = 0; i < group->normies.size(); i++) {
        group->normies[i].change_chsv(-chsv_change);
        group->normies[i].change_mana(mana_change);
    }
    for (int i = 0; i < group->danyas.size(); i++) {
        group->danyas[i].add_know(8); //Даня узнал что-то новое
        group->danyas[i].change_mana(mana_change / 2);
    }
    cout << "The seminarian" << this->name << "says that in physics there is decomposition only up to the first order" << endl
}
