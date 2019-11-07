/*!
\file line.cpp
*/

#include "line.h"
#include <iostream>

using namespace std;

line::line(sf::Vector2f a, sf::Vector2f b) : Shape(2)
{
	point1 = a;
	point2 = b;

	drawLine();
}

void line::drawLine() {
	points[0].position = point1;
	points[0].color = sf::Color::White;

	points[1].position = point2;
	points[1].color = sf::Color::White;
}