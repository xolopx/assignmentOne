#include <iostream>
#include "polygon.h"
#include "node.h"


using namespace tom_ass1;

int main() {

    polygon* albert = new polygon(5);

    albert->getPoint(0)->setPoints(1000,0);
    albert->getPoint(1)->setPoints(47,100);
    albert->getPoint(2)->setPoints(1,1);
    albert->getPoint(3)->setPoints(43,-100);
    albert->getPoint(4)->setPoints(-100.09,0);

    //creating new node, let's see what we can get out of it.
    node<polygon>* smoth = new node<polygon>(*albert);

//    smoth->set_data(*albert);



//    std::cout<<smoth->get_data().polyToString()<<std::endl;
//    std::cout<<"This is the closest distant to the origin: " <<albert->closestOrigin()<<std::endl;

    return 0;
}
