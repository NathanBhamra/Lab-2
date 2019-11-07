/*!
\file Shape.h
*
* This is the Shape header, within this header is the drawable. This is the parent class to all shapes, this means that I do not have to
* repeat the drawable function every class.
*/

#pragma once
#include "SFML/Graphics.hpp" //!< This is importing the graphics library from SFML
#include <iostream> //!< This is importing the input output library for C++

class Shape : public sf::Drawable //!< This is defining the class Shape and also inheriting the drawable function from the sf library
{
public: //!< This is a public assess modifier, this means that any function can access the data within here

	Shape(int n); //!< Shape is a function which will store the data of each point, for as many points I want, this function will keep count of each point and the main with connect them

protected: //!< This is a protected access modifier, anything in this cannot be accessed from a global variable however anything connected to this class can

	sf::VertexArray points; //!< This is declaring a variable called points and declaring it as a VertexArray variable
	void draw(sf::RenderTarget& target, sf::RenderStates states) const; //!< This is the draw function which will connect all points
};
