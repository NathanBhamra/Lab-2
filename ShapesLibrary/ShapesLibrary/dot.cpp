/*!
\file dot.cpp
*
* Comments are the same for each shape, check the line shape for the comments.
* The only difference is there are more points to form the shape.
*/

#include "dot.h"
#include <iostream>

using namespace std;

dot::dot(sf::Vector2f a, sf::Vector2f b, sf::Vector2f c, sf::Vector2f d) : Shape(4) {
	point1 = a;
	point2 = b;
	point3 = c;
	point4 = d;

	drawDot();
}

void dot::drawDot() {
	points[0].position = point1;
	points[0].color = sf::Color::Yellow;

	points[1].position = point2;
	points[1].color = sf::Color::Yellow;

	points[2].position = point3;
	points[2].color = sf::Color::Yellow;

	points[3].position = point4;
	points[3].color = sf::Color::Yellow;
}