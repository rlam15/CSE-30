#ifndef _QUEUE_H
#define _QUEUE_H
#include "LinkedList.h"

class Queue : public LinkedList
{
	public:
		Queue();
		~Queue();
		void enqueue(int val);
		int dequeue();
		int& front();
};
#endif
