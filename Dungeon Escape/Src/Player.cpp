#include "..//Includes/includes.h"
#include <iostream>

Player::Player()
{
	player.setSize(sf::Vector2f(50, 50));
	player.setFillColor(sf::Color::Red);
	Player::speed = 300.f;	
	Player::hp = 100;
}

void Player::DrawPlayer(sf::RenderWindow& window)
{
	window.draw(player);
}

void Player::DrawHp(sf::RenderWindow& window)
{
	const sf::Font font("arial.ttf");
	sf::Text hpText(font, "Hp : "+std::to_string(hp));
	hpText.setCharacterSize(30);
	hpText.setStyle(sf::Text::Bold);
	hpText.setFillColor(sf::Color::Red);
	sf::View currentView = window.getView();
	sf::Vector2f viewTopLeft = currentView.getCenter() - currentView.getSize() / 2.f;
	hpText.setPosition(viewTopLeft + sf::Vector2f(10.f, 10.f));
	window.draw(hpText);
}


void Player::TakeDamage()
{
	int currenthp = Player::getHp();
	int nextHp = currenthp;
	int damage = 10;

	if (currenthp > 60)
	{
		nextHp = currenthp - damage;
	}

	Player::hp = nextHp;
}