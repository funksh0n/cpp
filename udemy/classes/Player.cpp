#include "Player.h"

void Player::say(std::string message)
{
	std::cout << name << " Says: " << message << std::endl;
}

void Player::setName(std::string n)
{
	name = n;
}
