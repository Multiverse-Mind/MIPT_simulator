#ifndef OBSHESOS_LECTOR_HPP_INCLUDED
#define OBSHESOS_LECTOR_HPP_INCLUDED
#include "Obshesos_teacher"
#include "Lector.hpp"
class Obshesos_lector : public Lector, public Obshesos_teacher {
public:
	void call_Dmitriy();
};
#endif // OBSHESOS_LECTOR_HPP_INCLUDED