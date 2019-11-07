/*!
\file pentagon.h
*/

#pragma once
#include "SFML/Graphics.hpp"
#include "Shape.h"

class pentagon : public Shape {
public:
	//Square Constructor
	pentagon(sf::Vector2f a, sf::Vector2f b, sf::Vector2f c, sf::Vector2f d, sf::Vector2f e, sf::Vector2f f);

private:
	//Variables for position
	sf::Vector2f point1;
	sf::Vector2f point2;
	sf::Vector2f point3;
	sf::Vector2f point4;
	sf::Vector2f point5;
	sf::Vector2f point6;

	void drawPentagon();
};