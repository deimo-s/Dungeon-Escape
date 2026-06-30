#include "..//Includes/includes.h"


Controller::Controller()
{
	Controller::deltaTime = Controller::clock.restart().asSeconds();
}

void Controller::Move(Player& p)
{
	sf::Vector2f movement(0.f, 0.f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
	{
		movement.y -= p.speed * deltaTime;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
	{
		movement.y += p.speed * deltaTime;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
	{
		movement.x -= p.speed * deltaTime;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
	{
		movement.x += p.speed * deltaTime;
	}

	p.player.move(movement);
	
}

void Controller::Attack()
{

}