#include <iostream>
#include <string>
#include "Teacher.hpp"
#include "Group.hpp"
using namespace std;

void Teacher::teach(Group *group, char subject, string pair_type, int mana_loss){ // subject = 0 - матан, subject = 1 - общесос, subject = 2 - лабы
    for (int i = 0; i < group->chillers.size(); i++){
        if (group->chillers[i].get_mana() > 0) {
            group->chillers[i].add_know(subject);
            group->chillers[i].change_mana(-mana_loss * 2);
        }
    }
    for (int i = 0; i < group->normies.size(); i++){
        if (group->normies[i].get_mana() > 0) {
            group->normies[i].add_know(subject);
            group->normies[i].change_mana(-mana_loss);
        }
    }
    for (int i = 0; i < group->danyas.size(); i++){
        if (group->danyas[i].get_mana() > 0) {
            group->danyas[i].add_know(subject);
            group->danyas[i].change_mana(-mana_loss / 2);
        }
    }
    cout << "On the " << pair_type << " teacher " << this->name << " teaches someone something. Plus knowledge and"
                                                                   " minus mana for everyone who came." << endl;
};

void Teacher::tell_about_hirsch_index(Group *group){
    for (int i = 0; i < group->chillers.size(); i++){
        if (group->chillers[i].get_mana() > 0) {
            group->chillers[i].change_chsv(2 * (this->hirsh_index - 9));
        }
    }
    for (int i = 0; i < group->normies.size(); i++){
        if (group->normies[i].get_mana() > 0) {
            group->normies[i].change_chsv(this->hirsh_index - 9);
        }
    }
    cout << "The teacher " << this->name << " tells about his Hirsch index. The students realize what kind of scientist"
                                            " is teaching them and their chsv changes (except of Danyas)." << endl;
}

void Teacher::set_hirsh_index(int a) {
    this->hirsh_index = a;
};

int Teacher::get_hirsh_index() {
    return this->hirsh_index;
}

/*
int main(){
    Teacher Shige(5, "Shige");
    Shige.set_hirsh_index(5);
    Shige.moan();
    cout << Shige.get_hirsh_index() << endl;
}
 */