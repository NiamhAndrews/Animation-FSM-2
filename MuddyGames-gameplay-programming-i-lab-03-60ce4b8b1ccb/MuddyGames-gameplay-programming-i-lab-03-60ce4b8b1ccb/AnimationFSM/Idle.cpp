#include <Idle.h>
#include <Jumping.h>
#include <Climbing.h>
#include <WalkRight.h>
#include "WalkLeft.h"
#include <string>

void Idle::handleInput() {}
void Idle::update() {}

void Idle::jumping(PlayerFSM* a)
{
	std::cout << "Idle -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}


void Idle::walkRight(PlayerFSM* a)
{
	std::cout << "Idle -> WalkRight" << std::endl;
	a->setCurrent(new WalkRight());
	delete this;
}

void Idle::walkLeft(PlayerFSM* a)
{
	std::cout << "Idle -> WalkLeft" << std::endl;
	a->setCurrent(new WalkLeft());
	delete this;
}
