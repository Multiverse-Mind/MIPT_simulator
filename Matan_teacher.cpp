#include <iostream>
#include "Matan_teacher.hpp"
#include "Group.hpp"
using namespace std;

void Matan_teacher::prove_FubiniT(Group *group){
    for (int i = 0; i < group->chillers.size(); i++){
        group->chillers[i].add_know(0);
        group->chillers[i].change_mana(-8);
    }
    for (int i = 0; i < group->normies.size(); i++){
        group->normies[i].add_know(0);
        group->normies[i].change_mana(-5);
    }
    for (int i = 0; i < group->danyas.size(); i++){
        group->danyas[i].add_know(0);
        group->danyas[i].change_mana(-2);
    }
    cout << "Holy shit, the teacher of calculus " << this->name << " proves the Fubibi's theorem. Plus extra knowledge and"
                                                                   " minus extra mana for everyone who came." << endl;
}
