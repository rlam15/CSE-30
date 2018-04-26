#include "Queue_char.h"

Queue::Queue(){}
Queue::~Queue(){}

void Queue::enqueue(char val)
{
	insertAtBack(val);
}

char Queue::dequeue()
{
	if(isEmpty())
		throw 1;
	char val = getFrontRef();
	removeFromFront();
	return val;
}

char& Queue::front()
{
	if(isEmpty())
		throw 0;
	return getFrontRef();
}
