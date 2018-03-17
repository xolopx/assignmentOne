#include <iostream>
#include "polygon.h"
#include "node.h"
#include "point.h"


using namespace tom_ass1;

int main() {

    //Create 3 polygons
    polygon* rock = new polygon(1);
    polygon* jazz = new polygon(3);
    polygon* funk = new polygon(5);

    //Store the 3 polygons into 3 nodes.
    node<polygon>* nodeA = new node<polygon>(*rock);
    node<polygon>* nodeB = new node<polygon>(*jazz);
    node<polygon>* nodeC = new node<polygon>(*funk);

    //Make it a circle by joining the nodes together using set_previous & set_next;
    nodeA->set_next(nodeB);
    nodeA->set_previous(nodeC);

    nodeB->set_next(nodeC);
    nodeB->set_previous(nodeA);

    nodeC->set_next(nodeA);
    nodeC->set_previous(nodeB);

    std::cout<<nodeC->get_next()->get_data()->polyToString()<<std::endl;




    
    return 0;
}
