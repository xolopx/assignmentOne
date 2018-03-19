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

        //Constructor
        MyPolygons();										//default
//        MyPolygons(object& data);						//taking parameters.

//
//        //destructor
//        ~MyPolygons();
//
//        //member functions

        //adds an object to the head of the list. This object is now the new head.
        void add_to_head(object& data);
        //adds an object to the tail of the list. This object is now the new tail.
        void add_to_tail(object& data);
        //Remove the head.
        void remove_from_head();
        //Remove the tail.
        void remove_from_tail();
        //Moves the "current" pointer forward to the next node.
        void forward();
        //Moves the "current" pointer backwards to the previous node.
        void back();
        //Resets the location of the current pointer back to the sentinel.
        void reset();
        //Return the node that is stored at current.
        node<object> getNode();


//        void move_to_head();
//        void move_to_tail();
//        bool empty();
//        int position(std::string card_name);
//        bool remove(std::string card_name);
//        void shuffle();
//        object get_current();
//        std::size_t length();



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
