/*!
\file Shape.cpp
*/

#include "Shape.h" 
#include <iostream>

using namespace std;

// Primary Constructor. 
Shape::Shape(int n)
{
	points.setPrimitiveType(sf::LinesStrip);
	points.resize(n);
}

// Function used for drawing the Array. 
void Shape::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(points);
}