#ifndef LANDING_H
#define LANDING_H

#include <State.h>

class Landing : public State
{
public:
	Landing() {};
	~Landing() {};
	void jumping(PlayerFSM* a);
	void walkRight(PlayerFSM* a);
	void walkLeft(PlayerFSM* a);
};

#endif // !IDLE_H