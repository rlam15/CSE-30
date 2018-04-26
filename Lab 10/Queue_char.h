#ifndef _QUEUE_H
#define _QUEUE_H

#include "LinkedList_char.h"
#include <iostream>

class Queue : public LinkedList
{
	public:
		Queue();
		~Queue();
		void enqueue(char val);
		char dequeue();
		char& front();
};
#endif
