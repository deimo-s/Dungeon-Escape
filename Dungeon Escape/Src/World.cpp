#include "..//Includes/includes.h"

World::World()
{

}

void World::Camera(sf::RenderWindow& window, Player& player)
{
	sf::Vector2f PlayerPos = player.getPosition();
	sf::View camera(window.getDefaultView());
	camera.setCenter(PlayerPos);
	window.setView(camera);

}