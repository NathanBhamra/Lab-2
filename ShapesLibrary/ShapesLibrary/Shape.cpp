/*!
\file Shape.cpp
*
* This cpp will handle all the variables from the header file. This is the parent class so all shapes will use the functions from this program
* this will reduce code
*/

#include "Shape.h" // Includes the Shape header file
#include <iostream> // Included input output functions for C++

using namespace std; // Defining what syntax we will use, this will save time instead of using std::

Shape::Shape(int n) // This is using the Shape class from the header and is constructing a Shape function using int n as a parameter
{
	points.setPrimitiveType(sf::LinesStrip); // This is a declaration of a Permitive class which is hold sf::LineStrip which is used to connect the points
	points.resize(n); // This function will increase the size of n 
}

void Shape::draw(sf::RenderTarget& target, sf::RenderStates states) const //This is the function that will be ran to draw the shape
{
	target.draw(points); //This is used to connect each point, the array that is formed will be sent through the function until it has ran out of declared arrays
}