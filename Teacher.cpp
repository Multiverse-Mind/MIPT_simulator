#include <iostream>
#include "Teacher.hpp"
#include "Group.hpp"
using namespace std;

void Teacher::teach(Group *group, char subject){ // subject = 0 - матан, subject = 1 - общесос, subject = 2 - лабы
    for (int i = 0; i < group->chillers.size(); i++){
        group->chillers[i].add_know(subject);
    }
    for (int i = 0; i < group->normies.size(); i++){
        group->normies[i].add_know(subject);
    }
    for (int i = 0; i < group->danyas.size(); i++){
        group->danyas[i].add_know(subject);
    }
};

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