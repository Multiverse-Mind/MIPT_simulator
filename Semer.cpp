#include <iostream>
#include "Semer.hpp"
#include "Group.hpp"
#include <string>
#include <random>
using namespace std;

void Semer::tell_story(Group *group, int mana_profit, string sem_type)
{
    for (int i = 0; i < group->normies.size(); i++) {
        group->normies[i].change_mana(mana_profit);
    }
    for (int i = 0; i < group->danyas.size(); i++) {
        group->danyas[i].change_mana(mana_profit * 2);
    }
    cout << "On the " << sem_type << " seminarian tells a funny story to relax students. Normies and Danyas get mana"
                                     " (Danyas get double mana because they like to listen about human life sometimes.)"
                                     " Chillers are always relaxed so they don't care." << endl;
        
}
void Semer::call_to_the_board(Group *group, char subject, string sem_type, int know_loss, int chsv_profit, int mana_loss) // subject = 0 - матан, subject = 1 - общесос
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr1(0, 2);
    int student_type = distr1(gen);
    if (student_type == 0) {
        int l = group->chillers.size();
        if (l == 0){
            cout << "Unfortunately, the person the seminarian wanted to call didn't come..." << endl;
        }
        else{
            uniform_int_distribution<> distr2(0, l - 1);
            int i = distr2(gen);
            Chiller_griller *chiller = &(group->chillers[i]);
            chiller->delete_know(subject, know_loss);
            chiller->change_mana(-mana_loss * 3);
            cout << "On the " << sem_type << " seminarian calls chiller " << chiller->name << " to the board. Chiller"
                                                                                             " confuses and loses"
                                                                                             " knowledge in this"
                                                                                             " subject and extra mana."
                                                                                             << endl;
        }
    }
    else if (student_type == 1) {
        int l = group->normies.size();
        if (l == 0){
            cout << "Unfortunately, the person the seminarian wanted to call didn't come..." << endl;
        }
        else{
            uniform_int_distribution<> distr2(0, l - 1);
            int i = distr2(gen);
            Normie *normie = &(group->normies[i]);
            normie->add_know(subject);
            normie->change_mana(-mana_loss);
            normie->change_chsv(chsv_profit * 2);
            cout << "On the " << sem_type << " seminarian calls normie " << normie->name << " to the board. Normie does"
                                                                                           " well, gains knowledge"
                                                                                           " in this subject, loses"
                                                                                           " mana and gains double"
                                                                                           " chsv." << endl;
        }
    }
    else {
        int l = group->danyas.size();
        if (l == 0){
            cout << "Unfortunately, the person the seminarian wanted to call didn't come..." << endl;
        }
        else{
            uniform_int_distribution<> distr2(0, l - 1);
            int i = distr2(gen);
            Danya *danya = &(group->danyas[i]);
            danya->add_know(subject);
            danya->change_mana(-mana_loss / 2);
            cout << "On the " << sem_type << " seminarian calls Danya " << danya->name << " to the board. Danya does"
                                                                                           " as always, gains"
                                                                                           " knowledge in this subject"
                                                                                           " and loses mana." << endl;
        }
    }
}

void Semer::make_weekend_seminar(Group *group, int mana_loss, string sem_type)
{
    for (int i = 0; i < group->chillers.size(); i++) 
    {
        group->chillers[i].change_mana(-mana_loss * 4);
    }
    for (int i = 0; i < group->normies.size(); i++) {
        group->normies[i].change_mana(-mana_loss * 2);
    }
    for (int i = 0; i < group->danyas.size(); i++) {
        group->danyas[i].change_mana(-mana_loss);
    }
    cout << "Semer by " << sem_type << " conducts an additional seminar on the weekend. Minus double mana for everyone"
                                       " who came." << endl;
}
