#ifndef WALKRIGHT_H
#define	WALKRIGHT_H

#include <State.h>

class WalkRight : public State
{
public:
	WalkRight() {};
	~WalkRight() {};
	void jumping(PlayerFSM* a);
	void idle(PlayerFSM* a);
};

#endif // !IDLE_H
