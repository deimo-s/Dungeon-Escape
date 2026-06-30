#pragma once
#include <SFML/Graphics.hpp>
class Player
{
public:
	sf::RectangleShape player;
	Player();
	float speed;
	int damage;
	int hp;
	float position;

	void DrawPlayer(sf::RenderWindow& window);
	void DrawHp(sf::RenderWindow& window);
	void TakeDamage();
	int getHp()
	{
		return hp;
	}

	sf::Vector2f getPosition()
	{
		sf::Vector2f Playerpos = player.getPosition();
		return Playerpos;
	}
};

