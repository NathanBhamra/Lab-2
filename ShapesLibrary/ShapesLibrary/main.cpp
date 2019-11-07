/*! \file main.cpp
* \brief Main file for the Application
*
* Contains the draw functions which links to the header and cpp files of each shape. Shape can be created at any size
* with parameter inputs. In here the window for the SFML is opened.
*/

// Including SFML Graphics Library, Input Output Library and all header file for every shape
#include <SFML/Graphics.hpp>
#include <iostream>
#include "line.h"
#include "triangle.h"
#include "square.h"
#include "rectangle.h"
#include "pentagon.h"
#include "dot.h"


int main() {
	sf::RenderWindow window(sf::VideoMode(1400, 210), "Shapes Library"); //Creating the window for the visuals. The size of the window and the name of the window is also stated

	line lineShape(sf::Vector2f(190, 10), sf::Vector2f(10, 190)); //This will define the vectors for the 2 points to form the shape

	triangle triangleShape(sf::Vector2f(300, 10), sf::Vector2f(210, 190), sf::Vector2f(390, 190), sf::Vector2f(300, 10)); //This will define the vectors for the 4 points to form the shape

	square squareShape(sf::Vector2f(410, 10), sf::Vector2f(590, 10), sf::Vector2f(590, 190), sf::Vector2f(410, 190), sf::Vector2f(410, 10)); //This will define the vectors for the 5 points to form the shape

	rectangle rectangleShape(sf::Vector2f(610, 10), sf::Vector2f(990, 10), sf::Vector2f(990, 190), sf::Vector2f(610, 190), sf::Vector2f(610, 10)); //This will define the vectors for the 5 points to form the shape

	pentagon pentagonShape(sf::Vector2f(1100, 10), sf::Vector2f(1010, 75), sf::Vector2f(1050, 190), sf::Vector2f(1150, 190), sf::Vector2f(1190, 75), sf::Vector2f(1100,10)); //This will define the vectors for the 6 points to form the shape

	dot dotShape(sf::Vector2f(1300, 100), sf::Vector2f(1299, 101), sf::Vector2f(1301,101), sf::Vector2f(1300,100)); //This will define the vectors for the 4 points to form the shape

	while (window.isOpen()) { //All the events below will run once the window is open
		window.display(); //Displays the window
		
		// Draws each shape to the screen using the data above
		window.draw(triangleShape);
		window.draw(lineShape);
		window.draw(squareShape);
		window.draw(rectangleShape);
		window.draw(pentagonShape);
		window.draw(dotShape);
	}
}