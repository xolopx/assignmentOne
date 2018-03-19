//THOMAS COURTNEY: 3175353
#include "node.h"

namespace tom_ass1
{
	//CONSTRUCTOR

	template <typename object>
	node<object>::node()
	{
//		data = NULL;
//		next = NULL;
//		previous = NULL;
	}

	template <typename object>
	node<object>::node(const object& init_data)	
	{
		data = init_data;
		next = NULL;//init_next;
		previous = NULL; //init_previous;
	}
	
	template <typename object>
	void node<object>::set_data(const object& new_data) 			{data = new_data;}
	
	template <typename object>
	void node<object>::set_next(node<object>* next_link) 			{next = next_link;}
	
	template <typename object>
	void node<object>::set_previous(node<object>* previous_link) 	{previous = previous_link;}
	
	template <typename object>
	object* node<object>::get_data() 								{return &data;}
	
	template <typename object>
	const node<object>* node<object>::get_previous() const			{return previous;}
	
	template <typename object>
	node<object>* node<object>::get_previous()						{return previous;}
	
	template <typename object>
	const node<object>* node<object>::get_next() const  			{return next;}
	
	template <typename object>
	node<object>* node<object>::get_next()							{return next;}
}