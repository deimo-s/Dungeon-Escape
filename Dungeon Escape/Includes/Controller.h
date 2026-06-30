#pragma once
#include "Player.h"

class Controller : public Player
{
public:
	float deltaTime;
	sf::Clock clock;
	Controller();
	void Move(Player& p);
	void Attack();
};

