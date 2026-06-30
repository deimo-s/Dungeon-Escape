#pragma once
#include <SFML/Graphics.hpp>
class Player
{
public:
	sf::RectangleShape player;
	Player();
	float speed;
	float damage;
	float hp;
	float position;

	void Draw(sf::RenderWindow& window);

};

