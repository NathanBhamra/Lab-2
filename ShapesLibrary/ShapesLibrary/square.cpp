/*!
\file square.cpp
*
* Comments are the same for each shape, check the line shape for the comments.
* The only difference is there are more points to form the shape.
*/

#include "square.h"
#include <iostream>

using namespace std;

square::square(sf::Vector2f a, sf::Vector2f b, sf::Vector2f c, sf::Vector2f d, sf::Vector2f e) : Shape(5) {
	point1 = a;
	point2 = b;
	point3 = c;
	point4 = d;
	point5 = e;

	drawSquare();
}

void square::drawSquare() {
	points[0].position = point1;
	points[0].color = sf::Color::Green;

	points[1].position = point2;
	points[1].color = sf::Color::Green;

	points[2].position = point3;
	points[2].color = sf::Color::Green;

	points[3].position = point4;
	points[3].color = sf::Color::Green;

	points[4].position = point5;
	points[4].color = sf::Color::Green;
}