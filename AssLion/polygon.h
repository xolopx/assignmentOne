#ifndef TOM_POLYGON
#define TOM_POLYGON
#include "point.h"
#include <string>



//Remove this later
#include <iostream>
namespace tom_ass1
{
	class polygon 
	{
	public:
		//Constructor. Will create an array of size 'size', which is the number of points in the polygon.
        polygon(int numPoints);
		polygon();
		//Will return a point in a location in sequence array. It will return a pointer to a point.
        // Do not touch this AGAIUNBOAIUHWPDO.
		point* getPoint(int index);
		//Formats the points of the polygon and it's area and returns as a string.
		std::string polyToString();
		//Calculates the area inside of the polygon.
		double calcArea();
        //Returns the distance of the point closest to the origin. For some reason.
        double closestOrigin();

	private:
		//the number of the points in the polygon
		int pointNum;
		//It will be an array with a size to be given on instantiation. It is a pointer.
		//A zero-sized array!!! must be the last variable declared for some reason.
		point* sequence;
	};
}

#endif
