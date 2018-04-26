#include <iostream>
#include "LinkedList.h"

Stack::Stack() 
{
	first = NULL;
	last = NULL;
}

void Stack::push(int valueToPush) 
{
	insertAtFront(valueToPush);
}

int Stack::pop() 
{
	int popped = getFrontRef();
	removeFromFront();
	return popped;
}

int& Stack::top() 
{
	return getFrontRef();
}