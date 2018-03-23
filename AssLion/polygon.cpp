#include "polygon.h"
#include <cmath>
#include <sstream>
#include <iomanip>

namespace tom_ass1
{

	//constructor. The polygon MUST be given a size.
    polygon::polygon(int numPoints)
	{
		pointNum = numPoints;
        //initializing the already declared array of points.
        sequence = new point[pointNum];

        for (int i = 0; i < numPoints; i++)
        {
            //sequence has been defined as a pointer (to points tee hee).
            sequence[i] = point();

        }
    }
    polygon::polygon()
    {
        pointNum = 0;
        //initializing the already declared array of points.
        sequence = new point[0];

        for (int i = 0; i < 0; i++)
        {
            //sequence has been defined as a pointer (to points tee hee).
            sequence[i] = point();

        }
    }
//    polygon::~polygon() {
//
//
//       // delete sequence;
//
//    }

	//Will return a point in a location in sequence array. It will return a pointer to a point.
	point* polygon::getPoint(int index)
	{
		return &sequence[index];
	}

	//Formats the points of the polygon and it's area and returns as a string.
	std::string polygon::polyToString()
	{

        std::stringstream stream;


        std::string theString = "[";

        for(int i = 0; i<pointNum-1; i++)
        {
            //adding the points to the string.
            theString += (sequence[i].pointToString());
            if(i!=(pointNum-2))
            {
                theString += ",";
            }
        }
        char buffer[5];
        //Formatting the area.
        sprintf(buffer, "%5.2f" , calcArea());

        std::string finalResult = buffer;


        theString += "]: " + finalResult;



        return theString;
	}

	//Calculates the area inside of the polygon.
	double polygon::calcArea()
    {
        double area = 0;
        double interimResult = 0;
        //"n" form the formula is 1 more than the number of points on the polygon. This is not considered anywhere so we
        // modify the formula to be (n-1) instead of (n-2).

        for (int i = 0; i < (pointNum); i++)
        {
            interimResult = (sequence[i+1].getX()+sequence[i].getX())*(sequence[i+1].getY()-sequence[i].getY());

            area += interimResult;
        }

        return (0.5*fabs(area));
    }

    //Returns the distance of the point closest to the origin. For some reason.
    double polygon::closestOrigin()
    {
        //initialize the distance to one of the points.
        double distance = sequence[0].distOrigin();

        for(int i = 0; i<pointNum;i++)
        {
            if(distance>sequence[i].distOrigin())
            {
                distance = sequence[i].distOrigin();
            }
        }

        return distance;
    }

    //overloaded interface method.
    bool polygon::compare(polygon &theGon)
    {
        //In all of these cases we regard the theGon as larger than the polygon that it's being compared to.
        if(theGon.calcArea() >= calcArea() || theGon.calcArea()/calcArea() == 0.05 || theGon.calcArea()/calcArea() == 0.95)
        {
            return true;
        }
        else return false;
    }


}