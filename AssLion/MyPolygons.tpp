#include "MyPolygons.h"
namespace tom_ass1
{
    //Even new list cannot be empty so we pop a sentinel in that bad boi.
    template<typename object>
    MyPolygons<object>::MyPolygons() {

        //Tell that sentinel where to go.
        sentinel->set_next(sentinel);
        sentinel->set_previous(sentinel);

        head_ptr_ = sentinel;
        tail_ptr_ = sentinel;
        //currently we are pointed at the sentinel as current because it's the only goddamn node.
        current_ptr_ = sentinel;
        //We will call the list length zero because the sentinel has no data in it.
        list_length = 0;
    }

//    template<typename object>
//    MyPolygons<object>::MyPolygons(object &data) {
//        head_ptr_ = new node<object>(data);
//        tail_ptr_ = head_ptr_;
//        current_ptr_ = tail_ptr_;
//        list_length = 1;
//    }
//
////destructor - ensure all nodes are deleted from heap when link list is erased.
//    template<typename object>
//    MyPolygons<object>::~MyPolygons() {
//        while (head_ptr_ != NULL) {
//            remove_from_head();
//            tail_ptr_ = NULL;
//        }
//    }
    //AKA Prepend.
    template<typename object>
    void MyPolygons<object>::add_to_head(object &data) {

            //1. create new node on heap
            node <object> *freshNode = new node<object>(data);
            //2. set heads "previous" pointer to the new head and set the new nodes next pointer to the node at the current head
            head_ptr_->set_previous(freshNode);
            freshNode->set_next(head_ptr_);
            //3. set the head_ptr_ (from the list) to the new node.
            head_ptr_ = freshNode;
            //4. increment the list
            list_length++;
            //5. set the temp guy to NULL. It's good practice.
            freshNode = NULL;

            //6. sentinel's next is always head and its previous is always tail.
            sentinel->set_next(head_ptr_);
            sentinel->set_previous(tail_ptr_);
    }

    template<typename object>
    void MyPolygons<object>::add_to_tail(object &data) {


            //1. create new node on heap
            node <object> *freshNode = new node<object>(data);
            //2. set heads "previous" pointer to the new head and set the new nodes next pointer to the node at the current head
            tail_ptr_->set_next(freshNode);
            freshNode->set_previous(tail_ptr_);

            //3. set the head_ptr_ (from the list) to the new node.
            tail_ptr_ = freshNode;

            //4. increment the list
            list_length++;

            //5. set the temp guy to NULL. its good practice.
            freshNode = NULL;

    }
//
//    template<typename object>
//    void MyPolygons<object>::remove_from_head() {
//        //if list is empty do nothing. Could use an assert and terminate if someone attempts to remove node from empty list.
//        if (list_length == 0)return;
//
//        else if (list_length == 1) {
//            delete head_ptr_;
//            head_ptr_ = NULL;
//            tail_ptr_ = NULL;
//            list_length--;
//            return;
//        } else {
//            //1. Make a temporary head ptr and set as current head ptr.
//            node <object> *temp_head_ptr = head_ptr_;
//
//            //2. rearrange the head pointer for the list.
//            head_ptr_ = temp_head_ptr->get_next();
//
//            //3. remove this guy no longer needed.
//            delete temp_head_ptr;
//
//            //4. decrement the list length
//            list_length--;
//
//            //5. set this to null
//            temp_head_ptr = NULL;
//        }
//    }
//
//    template<typename object>
//    void MyPolygons<object>::remove_from_tail() {
//        //if list is empty do nothing. Could use an assert and terminate if someone attempts to remove node from empty list.
//        if (list_length == 0)return;
//
//        else if (list_length == 1) {
//            delete head_ptr_;
//            head_ptr_ = NULL;
//            tail_ptr_ = NULL;
//            list_length--;
//            return;
//        } else {
//            //1. Make a temporary tail ptr and set as current tail.
//            node <object> *temp_tail_ptr = tail_ptr_;
//
//            //2. rearrange the tail pointer for the list.
//            tail_ptr_ = temp_tail_ptr->get_previous();
//
//            //3. remove this guy no longer needed.
//            delete temp_tail_ptr;
//
//            //4. decrement the list length
//            list_length--;
//
//            //5. set this to null
//            temp_tail_ptr = NULL;
//        }
//    }
//
//    template<typename object>
//    bool MyPolygons<object>::remove(std::string card_name) {
//        //if list is empty just exit.
//        if (list_length == 0)return false;
//        else {
//            //search starts at head.
//            node <object> *position_ptr_ = head_ptr_;
//            int counter = 0;
//            //for loop searches for matching card face and assigns position pointer to it.
//            for (unsigned char i = 0; i < list_length; i++) {
//                counter++;
//                if (position_ptr_->get_data().get_face() == card_name) {
//                    //exists for-loop. current_ptr_ now points to position.
//                    i = list_length;
//                }
//                    //will continue searching for correct node
//                else position_ptr_ = position_ptr_->get_next();
//
//            }
//            //if card is head.
//            if (position_ptr_ == head_ptr_) {
//                remove_from_head();
//                return true;
//
//            }
//                //card is tail.
//            else if (position_ptr_ == tail_ptr_) {
//                remove_from_tail();
//                return true;
//            } else {
//
//                //assigning previous and next nodes.
//                node <object> *ahead = position_ptr_->get_next();
//                node <object> *behind = position_ptr_->get_previous();
//
//                //assigning links  between nodes.
//                ahead->set_previous(behind);
//                behind->set_next(ahead);
//
//                list_length--;
//                return true;
//
//
//            }
//        }
//    }
//
//    template<typename object>
//    void MyPolygons<object>::forward() {
//        current_ptr_ = current_ptr_->get_next();
//    }
//
//    template<typename object>
//    void MyPolygons<object>::back() {
//        current_ptr_ = current_ptr_->get_previous();
//    }
//
//    template<typename object>
//    void MyPolygons<object>::move_to_head() {
//        current_ptr_ = head_ptr_;
//    }
//
//    template<typename object>
//    void MyPolygons<object>::move_to_tail() {
//        current_ptr_ = tail_ptr_;
//    }
//
////postcondition: Returns true is MyPolygons has nodes else returns false.
//    template<typename object>
//    bool MyPolygons<object>::empty() {
//        return (list_length > 0);
//    }
//
////traverses whole deck searching for matching string, returns that position.
//    template<typename object>
//    int MyPolygons<object>::position(std::string card_name) {
//        //pointer starts at head and traverse contents of list until it finds.
//        node <object> *temp_ptr = head_ptr_;
//
//
//        for (unsigned char i = 0; i < list_length; i++) {
//            if (temp_ptr->get_data().get_face() == card_name) {
//                //delete temp_ptr;
//
//                return i;
//            } else temp_ptr = temp_ptr->get_next();
//        }
//
//        return -1;
//
//    }
//
//    template<typename object>
//    object MyPolygons<object>::get_current() {
//        return current_ptr_->get_data();
//    }
//
//    template<typename object>
//    std::size_t MyPolygons<object>::length() {
//        return list_length;
//    }
//
//    template<typename object>
//    void MyPolygons<object>::shuffle() {
//
//        unsigned char i = list_length;
//
//        //start at tail
//        node <object> *traverse_ptr = tail_ptr_;
//        //node preserves the data before swapping
//        node <object> hold = *tail_ptr_;
//
//
//        //cycles through cards starting at tail until null.
//        for (; traverse_ptr != NULL; traverse_ptr = traverse_ptr->get_previous()) {
//            //resetting current_ptr to count from head again
//            move_to_head();
//            //controls swap loop
//            int k = rand() % i;
//            int j = 0;
//            //this loop decides which card is getting swapped with current temp.
//            while (j < k) {
//                //select card to be swapped with tail
//                current_ptr_ = current_ptr_->get_next();
//
//                j++;
//            }
//            //making copy of pointer. Hanging onto temp_ptr so can return to where was up to.
//            hold = *traverse_ptr;
//
//            //SWAPPING
//            //put selected card data into where temp is pointing.
//            traverse_ptr->set_data(current_ptr_->get_data());
//            //move traverse data into selected card
//            current_ptr_->set_data(hold.get_data());
//
//            i--;
//
//        }


    }
}