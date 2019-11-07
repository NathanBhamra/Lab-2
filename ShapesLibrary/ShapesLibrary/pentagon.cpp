/*!
\file pentagon.cpp
*
* Comments are the same for each shape, check the line shape for the comments.
* The only difference is there are more points to form the shape.
*/

#include "pentagon.h"
#include <iostream>

using namespace std;

pentagon::pentagon(sf::Vector2f a, sf::Vector2f b, sf::Vector2f c, sf::Vector2f d, sf::Vector2f e, sf::Vector2f f) : Shape(6) {
	point1 = a;
	point2 = b;
	point3 = c;
	point4 = d;
	point5 = e;
	point6 = f;

	drawPentagon();
}

void pentagon::drawPentagon() {
	points[0].position = point1;
	points[0].color = sf::Color::Red;

	points[1].position = point2;
	points[1].color = sf::Color::Red;

	points[2].position = point3;
	points[2].color = sf::Color::Red;

	points[3].position = point4;
	points[3].color = sf::Color::Red;

	points[4].position = point5;
	points[4].color = sf::Color::Red;

	points[5].position = point6;
	points[5].color = sf::Color::Red;
}