/*!
\file line.h
*
* This is the first shape that I will form. In this header file I am declaring the class and constructing the points using a Vector2f
* data type. Having this in a class allows me to create multiple instances of it and have multiple 'lines' with different vectors.
*/

#pragma once
#include "SFML/Graphics.hpp" //!< Importing the SFML Library
#include "Shape.h" //!< Importing the Shapes class

class line : public Shape { //!< This is declaring a class called line and inheriting the class Shape 
public: //!< Public assess specifier, this means that everything below can be accessed by the main

	line(sf::Vector2f a, sf::Vector2f b); //!< This creates is a constructor for the variable line

	//!< This is creating 2 variables
	sf::Vector2f point1;
	sf::Vector2f point2;

	void drawLine(); //!< Running the function drawLine(), this is in the cpp
};