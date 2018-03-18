// THOMAS COURTNEY: 3175353
//Class: nodes contain the data of card object passed to them and are doubly linked to previous and next node neighbours.
//Node NEEDS to be a tempalte so that encapsulation works correctly and the node cannot see the data that is holding.


#ifndef TOM_NODE
#define TOM_NODE


#include <cstdlib>		//c standard library gives access to NULL pointer.


namespace tom_ass1
{
	template <typename object>
	class node
	{
		public:
			
			
			//CONSTRUCTOR
			node(const object& init_data);
				//Default



			
			//Member functions
			void set_data(const object& new_data); 		
			void set_next(node<object>* next_link);				
			void set_previous(node<object>* previous_link); 			
			object get_data() const; 
			
			std::string get_face();
			int get_value();
			bool get_faceUp();
			void set_faceUp(bool upOrDown);
			
			const node<object>* get_previous() const; 				
			node<object>* get_previous();							
			const node<object>* get_next() const; 					
			node<object>* get_next();							
			
		private: 
		
			
			object data;					//the card contained in the node.
			node<object>* next;				//pointer to next node
			node<object>* previous;			//pointer to previous node
			
	};
}

#include "node.tpp"

#endif