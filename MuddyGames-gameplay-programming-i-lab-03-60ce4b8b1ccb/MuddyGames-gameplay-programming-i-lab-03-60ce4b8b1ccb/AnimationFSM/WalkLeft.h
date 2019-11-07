#ifndef WALKLEFT_H
#define	WALKLEFT_H

#include <State.h>

class WalkLeft : public State
{
public:
	WalkLeft() {};
	~WalkLeft() {};
	void jumping(PlayerFSM* a);
	void idle(PlayerFSM* a);
};

#endif // !IDLE_H