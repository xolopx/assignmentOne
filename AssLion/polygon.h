#ifndef TOM_POLYGON
#define TOM_POLYGON
#include "point.h"
#include "ComparePoly.h"
#include <string>



//Remove this later
#include <iostream>
namespace tom_ass1
{
	//get dat interface in there bois.
	class polygon : public ComparePoly
	{
	public:

		//Constructor. Will create an array of size 'size', which is the number of points in the polygon.
        polygon(int numPoints);
		polygon();
		//Destructor
//		~polygon();

		//Member Functions

		//Will return a point in a location in sequence array. It will return a pointer to a point.
		point* getPoint(int index);
		//Formats the points of the polygon and it's area and returns as a string.
		std::string polyToString();
		//Calculates the area inside of the polygon.
		double calcArea();
        //Returns the distance of the point closest to the origin. For some reason.
        double closestOrigin();

		//Overloaded method form interface. Passed a new polygon and compares to the subject.
		virtual bool compare(polygon &theGon);

	private:
		//the number of the points in the polygon
		int pointNum;
		//It will be an array with a size to be given on instantiation. It is a pointer.
		//A zero-sized array!!! must be the last variable declared for some reason.
		point* sequence;
	};
}

#endif
