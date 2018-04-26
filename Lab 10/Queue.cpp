#include "Queue.h"
#include "LinkedList.h"

Queue::Queue(){}
Queue::~Queue(){}

void Queue::enqueue(int val)
{
	insertAtBack(val);
}

int Queue::dequeue()
{
	if(isEmpty())
		throw 1;
	int val = getFrontRef();
	removeFromFront();
	return val;
}

int& Queue::front()
{
	if(isEmpty())
		throw 0;
	return getFrontRef();
}
