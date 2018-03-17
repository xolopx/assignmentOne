#pragma once
#ifndef TOM_POINT
#define TOM_POINT

#include <string>

namespace tom_ass1
{
	class point
	{
	public:
		//default constructor.
		point();
		//set's the values for the point coordinates.
		void setPoints(double xCoord, double yCoord);
		//return the points as a string of a certain format.
		std::string pointToString();
		//Sets the x-coordinate of point.
		void setX(double xCoord);
		//Sets the y-coordinate of point.
		void setY(double yCoord);
		//Returns the distance of the point from the origin.
		double distOrigin();
		//returns the x-coordinate of the point.
		double getX();
		//returns the y-coordinate of the point.
		double getY();

	private:

		double y;
		double x;
		
	};
}


#endif