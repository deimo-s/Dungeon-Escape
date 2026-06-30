#pragma once
class Player;
class World
{
public:
	World();
	void Camera(sf::RenderWindow& window, Player& player);
	void keyPos();
	void potionPos();
};

