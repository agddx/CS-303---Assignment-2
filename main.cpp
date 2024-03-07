#include "Stack.h"

int main()
{
	stack object; //creating a stack object

	if (object.isEmpty()) //checking if it's empty or not
	{
		cout << "Empty." << endl;
	}
	else
	{
		cout << "Not empty." << endl;
	}

	object.insert(1); //adding some integers to the stack
	object.insert(2);
	object.insert(3);
	object.insert(4);
	object.insert(5);

	object.remove(); //removing an element

	cout << object.top() << " is the top of the stack.\n"; //finding the top

	cout << object.avg() << " is the average of the stack\n"; //finding the average

	return 0;
}