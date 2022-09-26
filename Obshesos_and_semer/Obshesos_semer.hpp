#ifndef OBSHESOS_SEMER_HPP_INCLUDED
#define OBSHESOS_SEMER_HPP_INCLUDED
#include "Obshesos_teacher.hpp"
#include "Semer.hpp"

class Obshesos_semer : public Semer, public Obshesos_teacher {
public:
	void tell_about_way();
}
#endif // OBSHESOS_SEMER_HPP_INCLUDED