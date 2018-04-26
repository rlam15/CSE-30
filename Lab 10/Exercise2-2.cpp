#include "Queue_char.h"
#include <iostream>
using namespace std;
int main()
{
	Queue q;
	cout<<"Function Call\tOutput\tFront  Queue  Rear\n";
        try
        {
		cout<<"dequeue()\t";
                cout<<q.dequeue();
		q.print(); cout<<endl;
        }
        catch(int e)
        {
                if(e)
                        cout<<"Call to dequeue() generated an exception, because the queue is empty"<<endl;
                else
                        cout<<"Call to front() generated an exception, because the queue is empty"<<endl;
        }
        cout<<"enqueue(D)\t\t";
        q.enqueue('D');
        q.print(); cout<<endl;

        cout<<"enqueue(A)\t\t";
        q.enqueue('A');
        q.print(); cout<<endl;

        try
        {
                cout<<"dequeue()\t";
                cout<<q.dequeue()<<"\t";
                q.print(); cout<<endl;
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
                cout<<"size()\t\t";
                cout<<q.size()<<"\t";
                q.print(); cout<<endl;
        }
        catch(int e)
        {
                if(e)
                        cout<<"Call to dequeue() generated an exception, because the queue is empty"<<endl;
                else
                        cout<<"Call to front() generated an exception, because the queue is empty"<<endl;
        }
        cout<<"enqueue(D)\t\t";
        q.enqueue('D');
        q.print(); cout<<endl;

        try
        {
                cout<<"isEmpty()\t";
                cout<<q.isEmpty()<<"\t";
                q.print();cout<<endl;
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
                cout<<"front()\t\t";
                cout<<q.front()<<"\t";
                q.print();cout<<endl;
        }
        catch(int e)
        {
                if(e)
                        cout<<"Call to dequeue() generated an exception, because the queue is empty"<<endl;
                else
                        cout<<"Call to front() generated an exception, because the queue is empty"<<endl;
        }
        cout<<"enqueue(T)\t\t";
        q.enqueue('T');
        q.print();cout<<endl;
        try
        {
                cout<<"front()\t\t";
                cout<<q.front()<<"\t";
                q.print();cout<<endl;
        }
        catch(int e)
        {
                if(e)
                        cout<<"Call to dequeue() generated an exception, because the queue is empty"<<endl;
                else
                        cout<<"Call to front() generated an exception, because the queue is empty"<<endl;
        }

}
