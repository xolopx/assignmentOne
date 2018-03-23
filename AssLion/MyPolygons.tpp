#include "MyPolygons.h"
namespace tom_ass1
{
    //Even new list cannot be empty so we pop a sentinel in that bad boi.
    template<typename object>
    MyPolygons<object>::MyPolygons() {


        //All signs point to sentinel.
        head_ptr_ = sentinel;
        tail_ptr_ = sentinel;
        //Tell that sentinel where to go.
        sentinel->set_next(head_ptr_);
        sentinel->set_previous(tail_ptr_);
        //currently we are pointed at the sentinel as current because it's the only goddamn node.
        current_ptr_ = sentinel;
        //We will call the list length zero because the sentinel has no data in it.
        list_length = 0;
    }
//    template<typename object>
//    MyPolygons<object>::~MyPolygons() {
//        delete sentinel;
//        delete head_ptr_;
//        delete tail_ptr_;
//        delete current_ptr_;
//
//    }

    //This commented out section has the 1 argument constructor and the destructor in it.
/*
    template<typename object>
    MyPolygons<object>::MyPolygons(object &data) {
        head_ptr_ = new node<object>(data);
        tail_ptr_ = head_ptr_;
        current_ptr_ = tail_ptr_;
        list_length = 1;
    }

//destructor - ensure all nodes are deleted from heap when link list is erased.
    template<typename object>
    MyPolygons<object>::~MyPolygons() {
        while (head_ptr_ != NULL) {
            remove_from_head();
            tail_ptr_ = NULL;
        }
    }

 */
    //AKA Prepend.
    template<typename object>
    void MyPolygons<object>::add_to_head(object &data) {
        //return current to sentinel.
        reset();
        add(data);
    }

    template<typename object>
    void MyPolygons<object>::add_to_tail(object &data) {
        //Set current to the previous of the sentinel (aka the tail).
        current_ptr_ = sentinel->get_previous();
        //pop that badboi in the list yo.
        add(data);
    }

    template<typename object>
    node<object> MyPolygons<object>::getNode()
    {
        return *current_ptr_;
    }

    template<typename object>
    void MyPolygons<object>::add(object &data)
    {
        //1. create new node on heap
        node <object> *freshNode = new node<object>(data);
        //set the next pointer of new node to the next of the sentinel.
        freshNode->set_next(current_ptr_->get_next());
        //set the previous node of the new node to the sentinel. It is now positioned where the head would be. Good.
        freshNode->set_previous(current_ptr_);
        //Set the sentinels next's previous to be the new Node.
        current_ptr_->get_next()->set_previous(freshNode);
        //Set the sentinel's next to be the new node.
        sentinel->set_next(freshNode);
        //set current to the new node.
        current_ptr_=freshNode;
        //increment the ol' listo.
        list_length++;

    }

    template<typename object>
    void MyPolygons<object>::forward() {
        current_ptr_ = current_ptr_->get_next();
    }

    template<typename object>
    void MyPolygons<object>::back() {
        current_ptr_ = current_ptr_->get_previous();
    }

    template<typename object>
    void MyPolygons<object>::reset() {
        current_ptr_= sentinel;
    }

    template<typename object>
    void MyPolygons<object>::insert(int position,object& data)
    {
        //reset the position of the current pointer to have a starting point.
        reset();
        //cycle through the linked list until the position is reached.
        for(int i = 0;i<position;i++)
        {
            //will cycle the current pointer forward to the position.
            forward();
        }
        //Position is now reached so add the new node.
        add(data);
    }

    template<typename object>
    node<object> MyPolygons<object>::pop()
    {
        //Create a pointer to store the retrieved head in.
        node<object> theHead;
        //retrieve the head.
        theHead = getHead();
        //delete the head.
        deleteHead();

        return theHead;
    }

    template<typename object>
    node<object> MyPolygons<object>::getHead()
    {
        //make the current the next of the sentinel (aka the head).
        current_ptr_ = sentinel->get_next();

        //return the node stored at the current, spoiler it's the head.
        return getNode();

    }

    template<typename object>
    void MyPolygons<object>::deleteHead()
    {
        //set the current to the sentinel.
        reset();
        //Set the current to the head.
        forward();
        //Set the heads previous' next to the heads next. So splice out the previous' life.
        current_ptr_->get_previous()->set_next(current_ptr_->get_next());
        //Set the head's next to it's previous. So splice it out of the next's life.
        current_ptr_->get_next()->set_previous(current_ptr_->get_previous());
        //move the current pointer forward so that is no longer pointed at the node.
        forward();
    }

    template<typename object>
    int MyPolygons<object>::getSize() {
        return list_length;
    }



}