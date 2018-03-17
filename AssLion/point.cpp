#include "point.h"
#include <cmath>
#include <iostream>



namespace tom_ass1
{
	point::point()
	{
		y = 0;
		x = 0;
		 
	}
	void point::setPoints(double xCoord, double yCoord)
	{

		x = xCoord;
		y = yCoord;

	}

	std::string point::pointToString()
	{
		//In c++11 there is a sweet to_string function. 
		std::string xCoord = std::to_string(x);
		std::string yCoord = std::to_string(y);
		//putting it together.
		std::string theOutput = "(" + xCoord + "," + yCoord + ")";


		return theOutput;
	}
	//Sets the x-coordinate of point.
	void point::setX(double xCoord)
	{
		x = xCoord;
	}
	//Sets the y-coordinate of point.
	void point::setY(double yCoord)
	{
		y = yCoord;
	}
	//Returns the distance of the point from the origin.
	double point::distOrigin()
	{
		double distance = sqrt(pow(x, 2) + pow(y, 2));
		return distance;
	}

	double point::getX()
	{
		return x;
	}

	double point::getY()
	{
		return y;
	}

}