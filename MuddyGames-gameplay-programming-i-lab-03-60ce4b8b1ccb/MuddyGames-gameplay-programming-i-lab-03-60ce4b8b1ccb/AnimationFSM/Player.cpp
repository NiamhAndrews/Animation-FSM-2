

#include <iostream>
#include <Player.h>
#include <Idle.h>
#include <Debug.h>

Player::Player()
{
	m_state.setCurrent(new Idle());
	m_state.setPrevious(new Idle());
}

Player::Player(const AnimatedSprite& s) : m_animated_sprite(s)
{
	m_state.setCurrent(new Idle());
	m_state.setPrevious(new Idle());
}

Player::~Player() {}

AnimatedSprite& Player::getAnimatedSprite()
{
	int frame = m_animated_sprite.getCurrentFrame();
	m_animated_sprite.setTextureRect(m_animated_sprite.getFrame(frame));
	return m_animated_sprite;
}

void Player::handleInput(Input in)
{
	DEBUG_MSG("Handle Input");

	switch (in.getCurrent())
	{
	case Input::Action::IDLE:
		m_state.idle();
		break;
	case Input::Action::UP:
		m_state.jumping();
		break;
	case Input::Action::RIGHT:
		m_state.walkRight();
		break;
	case Input::Action::LEFT:
		m_state.walkLeft();
		break;
	case Input::Action::DOWN:
		m_state.landing();
		break;
	case Input::Action::FALLING:
		m_state.falling();
		break;
	case Input::Action::LANDING:
		m_state.landing();
		break;


	default:
		break;
	}
}





void Player::update()
{
	//std::cout << "Handle Update" << std::endl;
	m_animated_sprite.update();
}