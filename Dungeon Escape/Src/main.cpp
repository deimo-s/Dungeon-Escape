#include <SFML/Graphics.hpp>
#include "..//Includes/includes.h"

using namespace std;

int main()
{
    Player playerClass;
    Controller playerController;


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
        window.clear(sf::Color::Black);
        playerClass.Draw(window);
        window.display();
    }

}