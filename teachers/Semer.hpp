#ifndef SEMER_HPP_INCLUDED
#define SEMER_HPP_INCLUDED
#include <string>
#include "../Group.hpp"
class Semer{
public:

	void tell_story(Group *group, int mana_profit, string sem_type);
	void call_to_the_board(Group *group, char subject, string sem_type, int know_loss, int chsv_profit, int mana_loss);
    void make_weekend_seminar(Group *group, int mana_loss, string sem_type);
};

#endif // SEMER_HPP_INCLUDED
