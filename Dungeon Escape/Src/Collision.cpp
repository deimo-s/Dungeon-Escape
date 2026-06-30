#include "..//Includes/includes.h"

Collision::Collision()
{

}

void Collision::CollisionDetection(Player& p)
{
	sf::Vector2f playerPos = p.player.getPosition();
	if (playerPos.x < 0)
	{
		p.player.setPosition(sf::Vector2f(0, playerPos.y));
	}
	if (playerPos.x > 750)
	{
		p.player.setPosition(sf::Vector2f(750, playerPos.y));
	}

	if (playerPos.y < 0)
	{
		p.player.setPosition(sf::Vector2f(playerPos.x, 0));
	}

	if (playerPos.y > 550)
	{
		p.player.setPosition(sf::Vector2f(playerPos.x, 550));
	}
}