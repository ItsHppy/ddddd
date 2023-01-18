#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"
#include "brick.h"

struct Brickrow {
	int size;
	Brick brickArr[10];
};

void brickRowInit(Brickrow& brickrow, int size, sf::Vector2f rowStartPos,
	float offsetX)
{
	brickrow.size = size;
	for (int i = 0; i < brickrow.size; i++) {
		sf::Color color{
			(sf::Uint8)(rand() % 256),
			(sf::Uint8)(rand() % 256),
			(sf::Uint8)(rand() % 256)
		};
		sf
	}
}
