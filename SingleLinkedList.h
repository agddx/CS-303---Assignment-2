#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

#include <iostream>
using namespace std;

template <typename Item_Type>
struct node
{
	Item_Type data;
	node *next;
};

template <typename Item_Type>
class SingleLinkedList //class for the single linked list
{
	private: //declaring the head, tail, and size
	node<Item_Type> *head;
	node<Item_Type> *tail;
	size_t size;

	public:
	SingleLinkedList();
	~SingleLinkedList();

	void push_front(Item_Type item); //all of the member functions
   	void push_back(Item_Type item);
   	void pop_front();
	void pop_back();
	Item_Type front();
	Item_Type back();
   	bool empty();
   	void insert(size_t index, const Item_Type& item);
	bool remove(size_t index);
	size_t find(const Item_Type& item);
};

#endif