#include "point.h"
#include <cmath>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdio.h>



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
		char buffer[11];
		//putting it together.
		sprintf(buffer,"(%4.2f,%4.2f)" , x, y);

		return buffer;

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