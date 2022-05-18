#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"

class Intro {
private:
	sf::Texture texture;
	sf::Sprite sprite;
public:
	Intro() {
		texture.loadFromFile(SPLASH_INTRO);
		sprite.setTexture(texture);
		sprite.setScale(1.f, 1.2f);
	}
	sf::Sprite getSprite() { return sprite; }
};