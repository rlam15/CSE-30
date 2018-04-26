#include <iostream>
#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList()
{
	first = NULL;
	last = NULL;
}

LinkedList::~LinkedList()
{
        while(!isEmpty())
		removeFromBack();
}

void LinkedList::insertAtBack(int valueToInsert)
{
	if(isEmpty())
	{
		first = new Node;
		first->val = valueToInsert;
		last = first;
	}
	else//don't need a size 1 case because the lower case covers that option
	{
		last->next = new Node;
		last = last->next;
		last->val = valueToInsert;
	}	
}

bool LinkedList::removeFromBack()
{
	if(isEmpty())
		return 0;
	else if(first == last)
	{
		delete first;
		first = NULL;
		last = NULL;
		return 1;
	}
	else
	{
		Node* bLast = first;//bLast for before last
		for(int i = 1; i<size()-1; i++)
		{
			bLast = bLast->next;
		}
		delete last;
		last = bLast;
	}
}

bool LinkedList::isEmpty()
{
	if(first!=NULL)//in all cases, when a LinkedList is empty, it will have first pointing to null
		return 0;
	return 1;
}

int LinkedList::size()
{
	Node* temp = first;
	int c = 1;
	if(!isEmpty())
	{
		while(temp!=last)
		{
			c++;
			temp = temp->next;
		}
		return c;
	}
	else
		return 0;
}

void LinkedList::clear()//simplest way to write this, code for removeFromBack() is there, so might as well use it
{
	while(!isEmpty())
		removeFromBack();
}

void LinkedList::print()
{
	Node* temp = first;
	for(int i = 0; i<size(); i++)
	{
		if(temp!=last)
			cout<<temp->val<<",";//prints all but last with a ',' after
			temp = temp->next;
	}
	if(last!=NULL)
		cout<<last->val;
}

void LinkedList::insertAtFront(int valueToInsert)
{
	if(isEmpty())
	{
		first = new Node;
		first->val = valueToInsert;
		last = first;
	}
	else//size 1 case is also covered by the else case
	{
		Node *temp = first;
		first = new Node;
		first->val = valueToInsert;
		first->next = temp;
	}
}

bool LinkedList::removeFromFront()
{
	if(isEmpty())
		return 0;
	else if(size()==1)
	{
		delete first;
		first = NULL;//not setting these to NULL will generate errors, would be pointing to garbage instead of null
		last = NULL;
		return 1;
	}
	else
	{
		Node* temp = first;
		first = first->next;
		delete temp;
		return 1;
	}
}

int& LinkedList::getBackRef()
{
	return last->val;
}
