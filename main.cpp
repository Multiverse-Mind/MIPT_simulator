//
// Created by Sasha on 02.10.2022.
//
#include <iostream>
#include <vector>
#include "students/Danya.hpp"
#include "students/Normie.hpp"
#include "students/Chiller_griller.hpp"
#include "Group.hpp"
#include "teachers/Matan_semer.hpp"
#include "teachers/Matan_lector.hpp"
#include "teachers/Obshesos_labnik.hpp"
#include "teachers/Obshesos_lector.hpp"
#include "teachers/Obshesos_semer.hpp"
using namespace std;


void para_play(Group *group, Matan_lector &matan_lector){
    matan_lector.get_late(group, 5);
    matan_lector.tell_about_hirsch_index(group);
    matan_lector.teach(group, 0, "matan", 10);
    matan_lector.prove_FubiniT(group, 10);
    if (group->danyas.size() > 0){
        group->danyas[0].correct_a_teacher();
    }
    matan_lector.tell_a_shit(group, 2, 10);
}

void para_play(Group *group, Matan_semer &matan_semer){
    matan_semer.call_to_the_board(group, 0, "matan", 2, 2, 5);
    matan_semer.theory_testus(group, 3, 3, 5);
    matan_semer.teach(group, 0, "matan", 10);
    if (group->danyas.size() > 1){
        group->danyas[1].correct_a_teacher();
    }
    matan_semer.tell_about_hirsch_index(group);
    matan_semer.tell_story(group, 3, "matan");
    matan_semer.prove_FubiniT(group, 10);
    matan_semer.make_weekend_seminar(group, 3, "matan");
}

void para_play(Group *group, Obshesos_lector &obshesos_lector){
    obshesos_lector.get_late(group, 5);
    obshesos_lector.tell_about_hirsch_index(group);
    obshesos_lector.teach(group, 1, "obshesos", 10);
    if (group->danyas.size() > 2){
        group->danyas[2].correct_a_teacher();
    }
    obshesos_lector.change_a_sign(group, 1, 1, 2, 1);
    obshesos_lector.call_Dmitriy(group, 5);
}

void para_play(Group *group, Obshesos_semer &obshesos_semer){
    obshesos_semer.call_to_the_board(group, 1, "obshesos", 2, 2, 5);
    obshesos_semer.teach(group, 1, "obshesos", 10);
    obshesos_semer.change_a_sign(group, 1, 1, 3, 1);
    obshesos_semer.tell_about_hirsch_index(group);
    obshesos_semer.tell_story(group, 3, "obshesos");
    obshesos_semer.tell_obshesosy_solution(group, 1, 5);
    if (group->danyas.size() > 3){
        group->danyas[3].correct_a_teacher();
    }
    obshesos_semer.make_weekend_seminar(group, 3, "obshesos");
}

void print_info(Group *group){
    cout << endl;
    cout << "Name | Matan know | Obshesos know | Labas_know | Mana | ChSV" << endl;
    for (int i = 0; i < group->chillers.size(); i++){
        cout << group->chillers[i].get_name() << "\t\t" << group->chillers[i].get_know(0) << "\t\t" <<
            group->chillers[i].get_know(1) << "\t\t" << group->chillers[i].get_know(2) << "\t\t" <<
            group->chillers[i].get_mana() << "\t\t" << group->chillers[i].get_chsv() << endl;
    }
    for (int i = 0; i < group->normies.size(); i++){
        cout << group->normies[i].get_name() << "\t\t" << group->normies[i].get_know(0) << "\t\t" <<
             group->normies[i].get_know(1) << "\t\t" << group->normies[i].get_know(2) << "\t\t" <<
             group->normies[i].get_mana() << "\t\t" << group->normies[i].get_chsv() << endl;
    }
    for (int i = 0; i < group->danyas.size(); i++){
        cout << group->danyas[i].get_name() << "\t\t" << group->danyas[i].get_know(0) << "\t\t" <<
             group->danyas[i].get_know(1) << "\t\t" << group->danyas[i].get_know(2) << "\t\t" <<
             group->danyas[i].get_mana() << "\t\t" << group->danyas[i].get_chsv() << endl;
    }
    cout << endl;
}

void para_play(Group *group, Obshesos_labnik &obshesos_labnik){
    obshesos_labnik.teach(group, 2, "obshesos_laba", 10);
    if (group->danyas.size() > 4){
        group->danyas[4].correct_a_teacher();
    }
    obshesos_labnik.change_a_sign(group, 2, 1, 3, 1);
    obshesos_labnik.tell_about_hirsch_index(group);
    obshesos_labnik.make_redo_laba(group, 2, 10);
}

void day_play(Group *group, Matan_lector &matan_lector, Matan_semer &matan_semer, Obshesos_lector &obshesos_lector,
              Obshesos_semer &obshesos_semer, Obshesos_labnik &obshesos_labnik){
    for (int i = 0; i < group->chillers.size(); i++){
        group->chillers[i].sleep(10);
    }
    for (int i = 0; i < group->normies.size(); i++){
        group->normies[i].sleep(8);
    }
    for (int i = 0; i < group->danyas.size(); i++){
        group->danyas[i].sleep(0);
    }
    matan_lector.sleep(12);
    matan_semer.sleep(10);
    obshesos_lector.sleep(14);
    obshesos_semer.sleep(12);
    obshesos_labnik.sleep(10);
    for (auto ch : group->chillers) {
        ch.moan();
    }
    /*for (int i = 0; i < group->chillers.size(); i++) {
        group->chillers[i].moan();
    }*/
    for (int i = 0; i < group->normies.size(); i++){
        group->normies[i].wake_up_for_para();
        group->normies[i].sleep(0);
        group->normies[i].moan();
    }
    for (int i = 0; i < group->danyas.size(); i++){
        group->danyas[i].sleep(0);
        group->normies[i].moan();
    }
    matan_lector.moan();
    matan_semer.moan();
    obshesos_lector.moan();
    obshesos_semer.moan();
    obshesos_labnik.moan();
    print_info(group);
    para_play(group, matan_lector);
    print_info(group);
    para_play(group, matan_semer);
    print_info(group);
    para_play(group, obshesos_lector);
    print_info(group);
    para_play(group, obshesos_semer);
    print_info(group);
    para_play(group, obshesos_labnik);
    print_info(group);
    if (group->chillers.size() > 0){
        group->chillers[0].take_a_leap_year();
    }
}


int main(){
    Chiller_griller Scally_Milano("Dima", 20);
    Scally_Milano.set_mana(30);
    Scally_Milano.set_num_of_gals(1000);
    Chiller_griller Big_Floppa("Floppa", 12);
    Big_Floppa.set_mana(40);
    Big_Floppa.set_num_of_gals(1000000);
    Chiller_griller Poshlaya_Molly("Kirill", 25);
    Poshlaya_Molly.set_mana(50);
    Poshlaya_Molly.set_num_of_gals(10000);
    Chiller_griller Okuyasu("Jobro", 15);
    Okuyasu.set_mana(60);
    Okuyasu.set_num_of_gals(0);
    Chiller_griller KyOresu("Oles", 25);
    KyOresu.set_mana(70);
    KyOresu.set_num_of_gals(1);
    Normie Rayan_Gosling("Ken", 41);
    Normie Hatsune_Miku("Waifu", 15);
    Normie Eren_Yeager("Founder", 19);
    Normie Slavyana_Feoktistova("Slavya", 17);
    Normie Kageyama_Shigeo("Mob", 14);
    Normie Jojo("Jotaro", 40);
    Normie Tyler_Durden("Spoiler", 30);
    Danya Danya_Samodelkin("Danya", 19);
    Danya Dr_Livesey("David", 40);
    Danya L("", 20);

    Group group;
    group.pb(Scally_Milano);
    group.pb(Big_Floppa);
    group.pb(Poshlaya_Molly);
    group.pb(Okuyasu);
    group.pb(KyOresu);
    group.pb(Rayan_Gosling);
    group.pb(Hatsune_Miku);
    group.pb(Eren_Yeager);
    group.pb(Slavyana_Feoktistova);
    group.pb(Kageyama_Shigeo);
    group.pb(Jojo);
    group.pb(Tyler_Durden);
    group.pb(Danya_Samodelkin);
    group.pb(Dr_Livesey);
    group.pb(L);

    Matan_lector Karasev("Roma", 45);
    Matan_semer Berezovik("Mark", 24);
    Obshesos_lector Great_Teacher("Onizuka", 25);
    Obshesos_semer Reigen("Arataka", 28);
    Obshesos_labnik Olga_Dmitrievna("Olenka", 28);
    day_play(&group, Karasev, Berezovik, Great_Teacher, Reigen, Olga_Dmitrievna);
    return 0;
}
