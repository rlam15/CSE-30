#include "Stack_char.h"

Stack::Stack(){}
Stack::~Stack(){}

void Stack::push(char val)
{
	insertAtBack(val);
}

char Stack::pop()
{
	char val = getBackRef();
	removeFromBack();
	return val;
}

char& Stack::top()
{
	return getBackRef();
}
