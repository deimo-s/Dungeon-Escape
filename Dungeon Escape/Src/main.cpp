#include "..//Includes/includes.h"

using namespace std;

int main()
{
    Player playerClass;
    Controller playerController;
    Collision collisionClass;
    World worldClass;


    sf::RenderWindow window(sf::VideoMode({ 800, 600 }), "Dungeon Escape");

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        playerController.deltaTime = playerController.clock.restart().asSeconds();
        playerController.Move(playerClass);
        worldClass.Camera(window, playerClass);
        window.clear(sf::Color::Black);
        playerClass.DrawHp(window);
        playerClass.DrawPlayer(window);

        window.display();
    }

}