#include "Falling.h"
#include "Idle.h"
#include "Jumping.h"

void Falling::idle(PlayerFSM* a)
{
	std::cout << "Idle -> Falling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Falling::jumping(PlayerFSM* a)
{
	std::cout << "Idle -> Jumping" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
