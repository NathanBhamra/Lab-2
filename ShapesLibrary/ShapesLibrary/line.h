/*!
\file line.h
*/

#pragma once
#include "SFML/Graphics.hpp"
#include "Shape.h"

class line : public Shape {
public:

	//Line Constructor
	line(sf::Vector2f a, sf::Vector2f b);

	//Variables for position
	sf::Vector2f point1;
	sf::Vector2f point2;

	void drawLine();
};