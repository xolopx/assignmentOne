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
        void add_to_head(object& data);
        void add_to_tail(object& data);
//        void remove_from_head();
//        void remove_from_tail();
//        void forward();
//        void back();
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
        node<object>* current_ptr_;
        std::size_t list_length;
    };



}
#include "MyPolygons.tpp"


#endif //ASSLION_MYPOLYGONS_H
