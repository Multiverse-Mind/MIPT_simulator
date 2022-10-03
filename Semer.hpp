#ifndef SEMER_HPP_INCLUDED
#define SEMER_HPP_INCLUDED
#include <string>
#include "Teacher.hpp"
#include "Group.hpp"
class Semer{
public:
	Semer(string name, int age) : Teacher(name, age) {};
	
	void make_weekend_seminar(Group *group, int mana_change, string sem_type);
	void tell_story(Group *group, int mana_change, string sem_type);
	void call_to_the_board(Group *group, int mana_change, char subject, int chsv_change);
};

#endif // SEMER_HPP_INCLUDED
