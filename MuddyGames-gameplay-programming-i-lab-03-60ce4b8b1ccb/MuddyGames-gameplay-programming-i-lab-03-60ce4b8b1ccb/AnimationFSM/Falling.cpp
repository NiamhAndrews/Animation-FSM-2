#include "Falling.h"
#include "Idle.h"
#include "Jumping.h"
#include "Landing.h"

void Falling::idle(PlayerFSM* a)
{
	std::cout << "Idle -> Falling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Falling::jumping(PlayerFSM* a)
{
	std::cout << "Jumping -> Falling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Falling::landing(PlayerFSM* a)
{
	std::cout << "Falling -> Landing" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
