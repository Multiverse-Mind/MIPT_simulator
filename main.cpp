//
// Created by Sasha on 02.10.2022.
//
#include <iostream>
#include <vector>
#include "Danya.hpp"
#include "Normie.hpp"
#include "Chiller_griller.hpp"
#include "Group.hpp"
#include "Matan_semer.hpp"
#include "Matan_lector.hpp"
#include "Obshesos_labnik.hpp"
#include "Obshesos_lector.hpp"
#include "Obshesos_semer.hpp"
using namespace std;

void matan_lecture_play(Group & group, Matan_lector & mlec) {
    
    mlec.get_late(&group, 100);
    mlec.teach(&group, 0, "MATAH LECCIYA", 7);
    mlec.tell_a_shit(&group, 2, -10);

}

void day_play(Group group, vector<char>);


int main(){
    Chiller_griller a("a", 0);
    a.set_mana(0);
    Chiller_griller b("b", 0);
    Normie c("c", 0);
    Normie d("d", 0);
    Danya e("e", 0);
    Danya f("f", 0);
    Obshesos_semer A("A", 0);
    Matan_lector on("he", 0);

    /*
    vector<Student*> grgr;
    grgr.push_back(&a);
    grgr.push_back(&b);
    grgr.push_back(&c);
    grgr.push_back(&d);
    grgr.push_back(&e);
    grgr.push_back(&f);
    */
    Group gr1;
    Group * group = &gr1;
    group->pb(a);
    group->pb(b);
    group->pb(c);
    group->pb(d);
    group->pb(e);
    group->pb(f);



    matan_lecture_play(gr1, on);

    //on.get_late(&gr1, 100);

    //cout << group->chillers[0].get_mana() << endl;

    cout << "Knowledge\tChSV\tMana\tAvg" << endl;
    for (int i = 0; i < group->chillers.size(); i++){
        cout << group->chillers[i].get_know(1) << "\t \t" << group->chillers[i].get_chsv() << "\t" <<
        group->chillers[i].get_mana() << "\t" << group->chillers[i].get_avg() << endl;
    }

    for (int i = 0; i < group->normies.size(); i++){
        cout << group->normies[i].get_know(1) << "\t \t" << group->normies[i].get_chsv() << "\t" <<
        group->normies[i].get_mana() << "\t" << group->normies[i].get_avg() << endl;
    }
    for (int i = 0; i < group->danyas.size(); i++){
        cout << group->danyas[i].get_know(1) << "\t \t" << group->danyas[i].get_chsv() << "\t" <<
        group->danyas[i].get_mana() << "\t" << group->danyas[i].get_avg() << endl;
    }
    cout << endl;

    /*
    cout << endl;
    cout << "Knowledge\tChSV\tMana" << endl;
    for (int i = 0; i < group.chillers.size(); i++){
        cout << group.chillers[i].get_know(1) << "\t" << group.chillers[i].get_chsv() << "\t" <<
        group.chillers[i].get_mana() << endl;
    }
    for (int i = 0; i < group.normies.size(); i++){
        cout << group.normies[i].get_know(1) << "\t" << group.normies[i].get_chsv() << "\t" <<
        group.normies[i].get_mana() << endl;
    }
    for (int i = 0; i < group.danyas.size(); i++){
        cout << group.danyas[i].get_know(1) << "\t" << group.danyas[i].get_chsv() << "\t" <<
        group.danyas[i].get_mana() << endl;
    }
    */
    return 0;
}
