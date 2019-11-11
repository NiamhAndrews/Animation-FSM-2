#include "Landing.h"
#include "Falling.h"
#include "Idle.h"
#include "Jumping.h"

void Landing::idle(PlayerFSM* a)
{
	std::cout << "Idle -> Landing" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Landing::jumping(PlayerFSM* a)
{
	std::cout << "Jumping -> Falling" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Landing::falling(PlayerFSM* a)
{
	std::cout << "Falling -> Landing" << std::endl;
	a->setCurrent(new Falling());
	delete this;
}