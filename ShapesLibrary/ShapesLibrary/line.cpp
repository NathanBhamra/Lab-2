/*!
\file line.cpp
*
* This file will store the functions to draw the shape with help of the shapes function which was included in the header file
*
*/

#include "line.h" // Including the header file
#include <iostream> // Including input output functions

using namespace std; // Defining what syntax we will use, this will save time instead of using std::

line::line(sf::Vector2f a, sf::Vector2f b) : Shape(2) //Using the function which was defined in the header with a constructor to define what a and b classes as. This will also run Shape twice as it has 2 points
{
	// Redefining a and b to point1 and point2
	point1 = a; 
	point2 = b;

	drawLine(); //This is going to run the drawLine function
}

void line::drawLine() { //Running the drawLine function
	points[0].position = point1; // Stating the position of the point using an array called points
	points[0].color = sf::Color::White; // Stating the colour of the point using an array called points

	points[1].position = point2;
	points[1].color = sf::Color::White;
}