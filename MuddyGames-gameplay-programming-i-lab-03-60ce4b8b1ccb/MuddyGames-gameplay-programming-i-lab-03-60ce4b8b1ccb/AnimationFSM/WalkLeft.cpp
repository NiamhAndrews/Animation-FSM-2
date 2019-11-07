#include "WalkLeft.h"
#include "Idle.h"
#include "Jumping.h"

void WalkLeft::idle(PlayerFSM* a)
{
	std::cout << "Idle -> Walk Left" << std::endl;
	a->setCurrent(new WalkLeft());
	delete this;
}

void WalkLeft::jumping(PlayerFSM* a)
{
	std::cout << "Walk Left -> Jumping" << std::endl;
	a->setCurrent(new WalkLeft());
	delete this;
}