#ifndef _NODE_H
#define _NODE_H

#include "LinkedList.h"

class Stack : public LinkedList
{
	public:
		Stack();
		~Stack();
		void push(int val);
		int pop();
		int& top();
};
#endif
