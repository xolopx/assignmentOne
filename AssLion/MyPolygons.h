//
// Created by tom on 17/03/2018.
//

#ifndef ASSLION_MYPOLYGONS_H
#define ASSLION_MYPOLYGONS_H
#include <cstdlib>
#include "node.h"

namespace tom_ass1
{
    template <typename object>
    class MyPolygons
    {
    public:


        MyPolygons();										//default
//      MyPolygons(object& data);						//taking parameters.

        //destructor
//      ~MyPolygons();

        //MEMBER FUNCTIONS

        //adds an object to the head of the list. This object is now the new head.
        void add_to_head(object& data);
        //adds an object to the tail of the list. This object is now the new tail.
        void add_to_tail(object& data);
        //Moves the "current" pointer forward to the next node.
        void forward();
        //Moves the "current" pointer backwards to the previous node.
        void back();
        //Resets the location of the current pointer back to the sentinel.
        void reset();
        //Return the node that is stored at current.
        node<object> getNode();
        //add the item in, all that needs to be changed before hand is where you want it place by moving current.
        void add(object& data);
        //insert the a node at a position (int position) in the list.
        void insert(int position, object& data);
        //"pops" the head off of the list.
        node<object> pop();
        //Returns the head of the linked list.
        node<object> getHead();
        //Deletes the head of the list.
        void deleteHead();


    private:
        //create the old sentinel. What a mad lad.
        node<object>* sentinel = new node<object>();
        node<object>* head_ptr_;
        node<object>* tail_ptr_;
        //This is going to chill unless moved by next() or back ().
        node<object>* current_ptr_;
        std::size_t list_length;
    };



}
#include "MyPolygons.tpp"


#endif //ASSLION_MYPOLYGONS_H
