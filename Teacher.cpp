#include <iostream>
#include "Teacher.hpp"
using namespace std;

void Teacher::teach(){
    cout << "������ ����-�� ����-�� ������ ����..." << endl;
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