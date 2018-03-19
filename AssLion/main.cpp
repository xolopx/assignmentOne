#include <iostream>
#include <fstream>
#include "polygon.h"
#include "node.h"
#include "MyPolygons.h"


using namespace tom_ass1;

int main()
{

    std::fstream myFile("data.txt", std::ios_base::in);

    float a;
    while(myFile>>a)
    {
        std::cout<<a<<std::endl;
    }

    getchar();

//
//
//
//    //This needs to be of type polygon.
//    MyPolygons<polygon>* albert = new MyPolygons<polygon>();
//
//    polygon* tim = new polygon(1);
//    polygon* tom = new polygon(3);
//    polygon* tam = new polygon(5);
//
//    albert->add_to_head(*tim);
//    albert->add_to_head(*tom);
//    albert->add_to_head(*tam);
//
//    std::cout<<albert->getNode().get_data()->polyToString()<<std::endl;
//    albert->forward();
//
//    std::cout<<albert->getNode().get_data()->polyToString()<<std::endl;
//    albert->forward();
//
//    std::cout<<albert->getNode().get_data()->polyToString()<<std::endl;
//    albert->forward();
//
//    node<polygon> sven = albert->pop();
//
//    std::cout<<std::endl<<sven.get_data()->polyToString()<<std::endl;

    return 0;
}

