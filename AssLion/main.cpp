#include <iostream>
#include <fstream>
#include "polygon.h"
#include "MyPolygons.h"

using namespace tom_ass1;
int main()
{
    //The list into which all polygons will be stored.
    MyPolygons<polygon>* theList = new MyPolygons<polygon>();

    //create a placeholder string for read in characters.
    std::string character;
    //create a stream to the data file.
    std::ifstream fileStream;
    //This is the number of polygons.
    int numPoints = 0;
    //Alias of size_t... whatever the heck that means.
    std::string::size_type size;
    //The variables into which the points will be stored.
    double x,y = 0;
    //open the stream.
    fileStream.open("data.txt");

    //While the file is not empty.
    while(!fileStream.eof())
    {
        //Put the characters into the string. The for-loop will cycle through the data.
        fileStream >> character;

        //Check if the character read in was a "P".
        if(character == "P")
        {
            //The next character is always the number of points in the polygon.
            fileStream >> character;
            //cast the string "character" to integer.
            numPoints = std::stoi(character,&size);
            //Create a new polygon to pop all your data in. The file has just announced a new polygon. Add extra
            // index so that we can store the first point in the last point.
            polygon* aPolygon = new polygon(numPoints+1);
            //now read in the rest of the information for that polygon which will be the point coordinates.
            for(int i = 0; i< numPoints; i++)
            {
                //read in the x coordinate.
                fileStream>>character;
                //cast the string to a double.
                x = std::stod(character,&size);
                //read in the y coordinate.
                fileStream>>character;
                //cast the string to a double.
                y = std::stod(character,&size);
                //now we store the coordinates in a point in the new polygon.
                aPolygon->getPoint(i)->setPoints(x,y);
            }

            //Store the first point in last index for printing calculation of area.
            x = aPolygon->getPoint(0)->getX();
            y = aPolygon->getPoint(0)->getY();
            //Set the final point.
            aPolygon->getPoint(numPoints)->setPoints(x,y);
            //store the polygon in the list.
            theList->add_to_head(*aPolygon);
        }
    }
    for(int i = 0; i<theList->getSize();i++)
    {
        std::cout<<theList->getHead().get_data()->polyToString()<<std::endl;
        theList->forward();
    }

    return 0;
}



