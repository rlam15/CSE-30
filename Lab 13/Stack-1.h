#ifndef _NODE_H
#define _NODE_H

#include "LinkedList.h"

template<class T>
class Stack : public LinkedList<T>
{
	public:
		Stack();
		~Stack();
		void push(T val);
		T pop();
		T& top();
};
template<class T>
Stack<T>::Stack(){}
template<class T>
Stack<T>::~Stack(){}

template<class T>
void Stack<T>::push(T val)
{
       LinkedList<T>::insertAtFront(val);
}

template<class T>
T Stack<T>::pop()
{
        T val = LinkedList<T>::getFrontRef();
        LinkedList<T>::removeFromFront();
        return val;
}

template<class T>
T& Stack<T>::top()
{
        return LinkedList<T>::getFrontRef();
}

#endif
