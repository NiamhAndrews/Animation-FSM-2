#include "WalkRight.h"
#include "Idle.h"
#include "Jumping.h"

void WalkRight::idle(PlayerFSM* a)
{
	std::cout << "Idle -> Walk Right" << std::endl;
	a->setCurrent(new WalkRight());
	delete this;
}

void WalkRight::jumping(PlayerFSM* a)
{
	std::cout << "Walk Right -> Jumping" << std::endl;
	a->setCurrent(new WalkRight());
	delete this;
}
