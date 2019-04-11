#include "Node1.h"
// Stack.template: implementation file for Stack<Type> template class.
#include <cassert>
#include <iostream>

using namespace std;

#ifndef STACK_TYPE_H
#define STACK_TYPE_H

template<class Type>
class Stack {
public:
	Stack();               // constructor    
	void makeEmpty();
	bool isEmpty() const;
	bool isFull() const;
	void push(Type item);
	Type pop();
	Type top() const;
	void displayStack();
	~Stack();             // destructor    
private:
	int length; // number of elements in the stack
	Node1<Type>*  stackTop;
};

template<class Type>
Stack<Type>::Stack()         // constructor
{
	length = 0;
	stackTop = NULL;
}

template<class Type>
bool Stack<Type>::isEmpty() const
{
	return  (stackTop == NULL);
}

template <class Type>
Stack<Type>::~Stack() {
	makeEmpty();
}

template<class Type>
void Stack<Type>::push(Type newItem)
{
	Node1<Type>*  newNode;
	newNode = new  Node1<Type>;
	newNode->data = newItem;
	newNode->next = stackTop;
	stackTop = newNode;
	length++;
}


template <class Type>
Type Stack<Type>::pop()
{
	Node1<Type>*  tempPtr;
	Type item = stackTop->data;
	tempPtr = stackTop;
	stackTop = stackTop->next;
	delete  tempPtr;
	length--;
	return item;
}

template<class Type>
bool Stack<Type>::isFull()     const
{
	Node* newNode;
	try
	{
		newNode = new Node;
		delete newNode;
		return false;
	}
	catch (bad_alloc exception)
	{
		return true;
	}
}

template<class Type>
void Stack<Type>::makeEmpty()
{
	// Post:  Stack is empty; all elements deallocated.
	Node1<Type>*  tempPtr;
	while (stackTop != NULL)
	{
		tempPtr = stackTop;
		stackTop = stackTop->next;
		delete  tempPtr;
	}
	length = 0;
}

template<class Type>
Type Stack<Type>::top() const
{
	if (isEmpty())
	{
		cout << "Stack is Empty\n";
		return NULL;
	}
	else
		return stackTop->data;
}

template<class Type>
void Stack<Type>::displayStack()
{
	Node1<Type>*  tempPtr;
	tempPtr = stackTop;



	while (tempPtr != NULL)
	{

		cout << tempPtr->data << endl;
		tempPtr = tempPtr->next;
	}

}

#endif