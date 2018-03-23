// THOMAS COURTNEY: 3175353
//Class: nodes contain the data of card object passed to them and are doubly linked to previous and next node neighbours.
//Node NEEDS to be a template so that encapsulation works correctly and the node cannot see the data that is holding.


#ifndef TOM_NODE
#define TOM_NODE


#include <cstdlib>		//c standard library gives access to NULL pointer.


namespace tom_ass1
{
	template <typename object>
	class node
	{
		public:
			
			
			//CONSTRUCTORS

			node();			//No arguments
			explicit node(const object& init_data);	//One argument

			//Destructor
//			~node();

			
			//Member functions
			void set_data(const object& new_data); 		
			void set_next(node<object>* next_link);				
			void set_previous(node<object>* previous_link);
			//Return the data stored in the node.
			object* get_data();
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