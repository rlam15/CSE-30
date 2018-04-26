#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
	Queue q;
	cout<<q.size()<<endl;
	try
	{
		cout<<q.front()<<endl;
	}
	catch(int e)
	{
		if(e)
			cout<<"Call to dequeue() generated an exception, because the queue is empty"<<endl;
		else
			cout<<"Call to front() generated an exception, because the queue is empty"<<endl;
	}
        try
        {
                cout<<q.dequeue()<<endl;
        }
        catch(int e)
        {
                if(e)
                        cout<<"Call to dequeue() generated an exception, because the queue is empty"<<endl;
                else
                        cout<<"Call to front() generated an exception, because the queue is empty"<<endl;
        }

	for(int i = 0; i<10; i++)
		q.enqueue(i);
        try
        {
		cout<<q.size()<<endl;
                cout<<q.front()<<endl;
        }
        catch(int e)
        {
                if(e)
                        cout<<"Call to dequeue() generated an exception, because the queue is empty"<<endl;
                else
                        cout<<"Call to front() generated an exception, because the queue is empty"<<endl;
        }

        try
        {
                cout<<q.dequeue()<<endl;
				cout<<q.size()<<endl;
        }
        catch(int e)
        {
                if(e)
                        cout<<"Call to dequeue() generated an exception, because the queue is empty"<<endl;
                else
                        cout<<"Call to front() generated an exception, because the queue is empty"<<endl;
        }

        try
        {
		q.enqueue(100);
		cout<<q.size()<<endl;
                cout<<q.dequeue()<<endl;
        }
        catch(int e)
        {
                if(e)
                        cout<<"Call to dequeue() generated an exception, because the queue is empty"<<endl;
                else
                        cout<<"Call to front() generated an exception, because the queue is empty"<<endl;
        }


}
