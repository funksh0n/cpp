#include <iostream>
#include <string>
#include <vector>

class Player
{
private:
	std::string name {""};

public:
	void say(std::string);
	void setName(std::string);
};

void Player::say(std::string message)
{
	std::cout << name << " Says: " << message << std::endl;
}

void Player::setName(std::string n)
{
	name = n;
}

int
main(int argc, char** argv)
{
	Player player;
	player.setName("Player");
	player.say("Hello.");

	Player *enemy1 = new Player;
	Player *enemy2 = new Player;

	(*enemy1).setName("Enemy 1");
	(*enemy1).say("Reee");
	enemy2->setName("Enemy 2");
	enemy2->say("Raaa");

	delete enemy1;
	delete enemy2;

	return 0;
}

