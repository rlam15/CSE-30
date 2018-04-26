#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream> 
using namespace std;

// Representation of an element in the linked list
template<class T>
struct Node
{
    T val; // Value of the node
    Node *next; // Pointer to the next node
};

template<class T>
class LinkedList
{
    // Public Functions/Variables
    public:
        /* IMPLEMENT THESE FUNCTIONS FOR EXERCISE1 */
        LinkedList(); // Constructor
        ~LinkedList(); // Destructor
        void insertAtBack(T valueToInsert);
        bool removeFromBack();
        void print();
        bool isEmpty();
        int size();
        void clear();

        /* IMPLEMENT THSES FUNCTIONS FOR EXERCISE2 */
        void insertAtFront(T valueToInsert);
        bool removeFromFront();
        T& getFrontRef();

        Node<T> *first; // Pointer pointing to the begining of the list
        Node<T> *last; // Pointer pointing to the end of the list
};

// Implement your functions here:

template<class T>
LinkedList<T>::LinkedList() 
{
    first = NULL;
    last = NULL;
}

template<class T>
LinkedList<T>::~LinkedList() 
{
    while (!isEmpty()) {
        removeFromBack();
    }
}

template<class T>
void LinkedList<T>::insertAtBack(T valueToInsert) 
{
    if (isEmpty()) 
    {
        first = new Node<T>;
        first -> val = valueToInsert;
        last = first; //Sets the pointer of last equal to first
    }
     else 
    {
        last -> next = new Node<T>; //points to the next node which is a new one
        last = last -> next; //sets the pointer last to the node after it
        last -> val = valueToInsert;
    }
}

template<class T>
void LinkedList<T>::insertAtFront(T valueToInsert) 
{
    if (isEmpty()) 
    {
        first = new Node<T>;
        first -> val = valueToInsert;
        last = first;
    }
    else 
    {
        Node<T> *temp = first;
        first = new Node<T>;
        first -> val = valueToInsert;
        first -> next = temp;
    }
}

template<class T>
bool LinkedList<T>::removeFromFront() 
{
    if (isEmpty()) {
        return 0;
    } 
    else if(size() == 1) 
    {
        delete first;
        first = NULL;
        last = NULL;
        return 1;
    }
    Node<T> *temp = first;
    first = first -> next;
    delete temp;
    return 1;
}

template<class T>
bool LinkedList<T>::removeFromBack() 
{
    if (isEmpty()) 
        return 0;
    else if (first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
        return 1;
    }
    else 
    {
        Node<T>* beforeLast = first; //Points to first using beforeLast. 
        for(int i = 1; i<size()-1; i++) //Increments to the second to last node
        {
            beforeLast = beforeLast->next; 
        }
        delete last; //deletes last node
        last = beforeLast; //sets last the same as the pointer 
        }
}

template<class T>
void LinkedList<T>::print() 
{
    Node<T>* temp = first;
    for (int i = 0; i < size(); i++) 
    {
        if (temp != last) 
        {
            cout << temp -> val << ",";
            temp = temp -> next;
        }
    }
    if (last != NULL) 
        cout << last -> val;
}

template<class T>
bool LinkedList<T>::isEmpty() 
{
    if (first != NULL) {
        return 0;
    }
    return 1;
}

template<class T>
int LinkedList<T>::size() 
{
    Node<T>* temp = first;
    int c = 1;
    
    if (!isEmpty()) {
        while (temp != last) {
            temp = temp -> next;
            c++;
        }
        return c;
    }
     else 
        return 0;
    }

template<class T>
void LinkedList<T>::clear() 
{
    if (!isEmpty()) //A simplier way of clearing a list if not already empty
        removeFromBack();
}

template<class T>
T& LinkedList<T>::getFrontRef() {
    return first->val;
}
#endif

