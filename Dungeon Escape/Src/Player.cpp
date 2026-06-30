#include "..//Includes/includes.h"
#include <iostream>


Player::Player()
{
	player.setSize(sf::Vector2f(50, 50));
	player.setFillColor(sf::Color::Red);
	Player::speed = 100.f;	
}

void Player::Draw(sf::RenderWindow& window)
{
	window.draw(player);
}
