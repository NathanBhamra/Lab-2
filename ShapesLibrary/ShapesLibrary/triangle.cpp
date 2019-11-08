/*!
\file triangle.cpp
*
* This file will store the functions to draw the shape with help of the shapes function which was included in the header file
*
*/

#include "triangle.h" // Including the header file
#include <iostream> // Including input output functions

using namespace std; // Defining what syntax we will use, this will save time instead of using std::

triangle::triangle(sf::Vector2f a, sf::Vector2f b, sf::Vector2f c, sf::Vector2f d) : Shape(4) //Using the function which was defined in the header with a constructor to define what a and b... classes has.
{
	// Redefining a,b... to point1,2...
	point1 = a;
	point2 = b;
	point3 = c;
	point4 = d;

	drawtriangle(); //This is going to run the draw function
}

void triangle::drawtriangle() { //Running the draw function
	points[0].position = point1; // Stating the position of the point using an array called points
	points[0].color = sf::Color::Blue; // Stating the colour of the point using an array called points

	points[1].position = point2;
	points[1].color = sf::Color::Blue;

	points[2].position = point3;
	points[2].color = sf::Color::Blue;

	points[3].position = point4;
	points[3].color = sf::Color::Blue;
}