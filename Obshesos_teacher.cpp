#include <iostream>
#include "Obshesos_teacher.hpp"
#include "Group.hpp"
using namespace std;

void Obshesos_teacher::change_a_sign(Group* group) {
    for (int i = 0; i < group->chillers.size(); i++) {
        group->chillers[i].delete_know(4);
        group->chillers[i].change_mana(-4);
    }
    for (int i = 0; i < group->normies.size(); i++) {
        group->normies[i].change_mana(-2);
    }
    for (int i = 0; i < group->danyas.size(); i++) {
        group->danyas[i].change_chsv(5); //Всё понял
    } 
    cout << "Holy shit, the teacher of obshesos " << this->name << "changes the limits of integration" << endl;
}

