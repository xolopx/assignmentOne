#include "polygon.h"
#include <cmath>
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

	//Will return a point in a location in sequence array. It will return a pointer to a point.
	point* polygon::getPoint(int index)
	{
		return &sequence[index];
	}

	//Formats the points of the polygon and it's area and returns as a string.
	std::string polygon::polyToString()
	{

        std::string theString = "[";

        for(int i = 0; i<pointNum; i++)
        {
            theString += (sequence[i].pointToString());
            if(i!=(pointNum-1))
            {
                theString += ",";
            }
        }

        std::string area = std::to_string(calcArea());
        theString += "]: " + area;



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
            interimResult = abs((sequence[i+1].getX()+sequence[i].getX())*(sequence[i+1].getY()-sequence[i].getY()));
//            std::cout<< interimResult<<std::endl;
			area += interimResult;
		}

		return (0.5*(area));
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
}