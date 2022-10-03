#include <iostream>
#include "Semer.hpp"
#include "Group.hpp"
#include <string>
using namespace std;

void Semer::tell_story(Group *group, int mana_change, string sem_type) //—емер рассказывает историю, пыта€сь расслабить студентов 
{
    for (int i = 0; i < group->normies.size(); i++) {
        group->normies[i].change_mana(-mana_change);
    }
    for (int i = 0; i < group->danyas.size(); i++) {
        group->danyas[i].change_mana(-2*mana_change);
    }
    cout << "On the " << sem_type << " semer " << this->name << "tells a funny story" << endl;
        
}
void Semer::call_to_the_board(Group *group, int mana_change,char subject, int chsv_change) // subject = 0 - матан, subject = 1 - общесос
{
    for (int i = 0; i < group->chillers.size(); i++) {
        group->chillers[i].delete_know(subject); //„илер запуталс€
        group->chillers[i].change_mana(mana_change * 3);
    }
    for (int i = 0; i < group->normies.size(); i++) {
        group->normies[i].add_know(subject);
        group->normies[i].change_mana(mana_change);
        group->normies[i].change_chsv(-2 * chsv_change);
    }
    for (int i = 0; i < group->danyas.size(); i++) {
        group->danyas[i].add_know(subject);
        group->danyas[i].change_mana(mana_change / 2);
    }
    cout << "On the " << sem_type << " semer " << this->name << "calls someone to the board" << endl;
}

void Semer::make_weekend_seminar(Group *group, int mana_change, string sem_type)
{
    for (int i = 0; i < group->chillers.size(); i++) 
    {
        group->chillers[i].change_mana(mana_change * 4);
    }
    for (int i = 0; i < group->normies.size(); i++) {
        group->normies[i].change_mana(mana_change*2);
    }
    for (int i = 0; i < group->danyas.size(); i++) {
        group->danyas[i].change_mana(mana_change);
    }
    cout << "Semer" << this->name << "by" << sem_type << "conducts an additional seminar on the weekend" << endl;
}
