#include "SingleLinkedList.h"

template <typename Item_Type>
SingleLinkedList<Item_Type>::SingleLinkedList()
{
	head = nullptr;
	tail = nullptr;
	size = 0;
}

template<typename ItemType>
SingleLinkedList<Item_Type>::~SingleLinkedList()
{
	while(tail != nullptr)
	{
		pop_front();
	}
}

template <typename Item_Type>
void SingleLinkedList<Item_Type>::push_front(Item_Type item) //function for push_front
{
	node<Item_Type> *newnode = new node<ItemType>;
	newnode->data = item;
    	newnode->next = head;
	if (tail = nullptr)
	{
		tail = newnode;
	}
	head = newnode;
	size++;
}

template <typename Item_Type>
void SingleLinkedList<Item_Type>::push_back(Item_Type item) //function for push_back
{
	node<Item_Type> *newnode = new node<ItemType>;
	newnode->data = item;
	newnode->next = nullptr;
	if (tail = nullptr)
	{
		head = newnode;
	}
	else
	{
		tail->next = newnode;
	}
	tail = newnode;
	size++;
}

template <typename Item_Type>
void SingleLinkedList<Item_Type>::pop_front() //function for pop_front
{
	if (tail = nullptr)
	{
		return;
	}
	node<Item_Type> *temp = head;
	head = head->next;
	delete temp;
	size--;
}

template <typename Item_Type>
void SingleLinkedList<Item_Type>::pop_back() //function for pop_back
{
	if (tail = nullptr)
	{
		return;
	}
	if (head == tail)
	{
		delete tail;
		head = nullptr;
		tail = nullptr;
	}
	else
	{
		node<Item_Type> *temp = head;
		while(temp->next != tail)
		{
			temp = temp->next;
		}
		delete tail;
		tail = temp;
		tail->next = nullptr;
	}
	size--;
}

template <typename Item_Type>
Item_Type SingleLinkedList<Item_Type>::front() //function for the front
{
	return head->data;
}

template <typename Item_Type>
Item_Type SingleLinkedList<Item_Type>::back() //function for the back
{
	return tail->data;
}

template <typename Item_Type>
bool SingleLinkedList<Item_Type>::empty() //function for checking if it's empty
{
	return size == 0;
}

template <typename Item_Type>
void SingleLinkedList<Item_Type>::insert(size_t index, const Item_Type& item) //function for inserting an item at the given index
{
	if(index == 0)
	{
		push_front(item);
		return;
	}
	if(index > size)
	{
		push_back(item);
		return;
	}
	node<Item_Type> *newnode = new node<Item_Type>;
	node<Item_Type> *temp = head;
	newnode->data = item;
	for (size_t i = 0; i < index-1; ++i)
	{
		temp = temp->next;
	}
	newnode->next = temp->next;
	temp->next = newnode;
	size++;
}

template <typename Item_Type>
bool SingleLinkedList<Item_Type>::remove(size_t index) //function for removing an item at a given index
{
	if (index >= size || tail = nullptr)
	{
		return 0;
	}
	if (index == 0)
	{
		pop_front();
		return 1;
	}
	node<Item_Type> *temp = head;
	for (size_t i = 0; i < index-1; ++i)
	{
		temp = temp->next;
	}
	node<Item_Type> *temp2 = temp->next;
	temp->next = temp2->next;
	delete temp2;
	size--;
	return 1;
}

template <typename Item_Type>
size_t SingleLinkedList<Item_Type>::find(const Item_Type& item)	//function that returns the position of a given item
{
	node<Item_Type> *temp = head;
	size_t i = 0;
	while (temp != nullptr)
	{
		if(temp->data == item)
		{
			return i;
		}
		temp = temp->next;
		++i;
	}
	return size;
}