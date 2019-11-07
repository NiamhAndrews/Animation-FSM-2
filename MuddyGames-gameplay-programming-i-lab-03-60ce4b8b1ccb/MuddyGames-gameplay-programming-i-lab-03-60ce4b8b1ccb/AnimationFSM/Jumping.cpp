#include <Jumping.h>
#include <Falling.h>
#include <Idle.h>
#include "WalkLeft.h"
#include "WalkRight.h"
#include <string>


void Jumping::falling(PlayerFSM* a)
{
	std::cout << "Jumping -> Falling" << std::endl;
	a->setCurrent(new Falling());
	delete this;
}

void Jumping::walkLeft(PlayerFSM* a)
{
	std::cout << "walkRight -> Jumping" << std::endl;
	a->setCurrent(new WalkLeft());
	delete this;
}

void Jumping::walkRight(PlayerFSM* a)
{
	std::cout << "walkLeft -> Jumping" << std::endl;
	a->setCurrent(new WalkRight());
	delete this;
}
