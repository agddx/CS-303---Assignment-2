#include "Stack.h"
#include "SingleLinkedList.h"

stack::stack()
{
}

bool stack::isEmpty() //function that checks if the stack is empty
{
	return data.empty();
}

void stack::insert(const int& item) //function that inserts an item in the stack
{
	data.push_back(item);
}


void stack::remove() //function that removes an item from the stack
{
	data.pop_back(item);
}

int stack::top() //function that return the top of the stack
{
	return data.back()
}

double stack::avg() //functions that returns the average value of the stack
{
	if (data.empty())
	{
		return 0;
	}
	double total = 0;
	double average = 0;
	for (int item : data)
	{
		total += item;
	}
	average = total / data.size();
	return average;
}