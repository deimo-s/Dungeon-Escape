#pragma once
#include "..//Includes/includes.h"


class Collision : public Player
{
public:
	Collision();
	void CollisionDetection(Player& p);
};

