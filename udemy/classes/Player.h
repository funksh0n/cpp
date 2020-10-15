#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <iostream>

class Player
{
private:
	std::string name {""};

public:
	void say(std::string);
	void setName(std::string);
};

#endif
