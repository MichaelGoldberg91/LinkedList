#include <iostream>
#include <cassert>

using namespace std;

//Definition of the item
template <class T>
struct item
{
	T info;
	item<T> *next;
};


template <class T>
class Queue
{
public:

	bool empty() const;
	//Function to determine whether the queue is empty. 
	//Postcondition: Returns true if the queue is empty,  otherwise returns false.

	bool full() const;
	//Function to determine whether the queue is full. 
	//Postcondition: Returns true if the queue is full,
	//               otherwise returns false.

	T front() const;
	//Function to return the first element of the queue.
	//Precondition: The queue exists and is not empty.
	//Postcondition: If the queue is empty, the program 
	//               terminates; otherwise, the first 
	//               element of the queue is returned. 

	T back() const;
	//Function to return the last element of the queue.
	//Precondition: The queue exists and is not empty.
	//Postcondition: If the queue is empty, the program 
	//               terminates; otherwise, the last 
	//               element of the queue is returned.

	void enqueue(const T& queueElement);
	//Function to add queueElement to the queue.
	//Precondition: The queue exists and is not full.
	//Postcondition: The queue is changed and queueElement
	//               is added to the queue.

	T dequeue();
	//Function  to remove the first element of the queue.
	//Precondition: The queue exists and is not empty.
	//Postcondition: The queue is changed and the first 
	//               element is removed from the queue.

	int size() const;

	Queue(); //Default constructor


private:
	item<T> *queueFront; //pointer to the front of the queue
	item<T> *queueRear;  //pointer to the rear of the queue
	int length;
};

//Default constructor
template <class T>
Queue<T>::Queue()
{
	queueFront = nullptr; //set front to nullptr
	queueRear = nullptr;  //set rear to nullptr
	length = 0;
} //end default constructor

template <class T>
bool Queue<T>::empty() const
{
	return (queueFront == nullptr);
} //end empty

template <class T>
bool Queue<T>::full() const
{
	return false;
} //end full

template <class T>
void Queue<T>::enqueue(const T& newElement)
{
	item<T> *newitem;

	newitem = new item <T>;   //create the item

	newitem->info = newElement; //store the info
	newitem->next = nullptr;    //initialize the next 
								//field to nullptr

	if (queueFront == nullptr) //if initially the queue is empty
	{
		queueFront = newitem;
		queueRear = newitem;
	}
	else        //add newitem at the end
	{
		queueRear->next = newitem;
		queueRear = queueRear->next;
	}
	length++;
}//end enqueue

template <class T>
T Queue<T>::front() const
{
	if (queueFront != nullptr)
	{
		return queueFront->info;
	}
	else
	{
		return NULL;
	}
} //end front

template <class T>
T Queue<T>::back() const
{
	if (queueRear != nullptr)
	{
		return queueRear->info;
	}
	else
	{
		return NULL;
	}

} //end back

template <class T>
T Queue<T>::dequeue()
{
	item<T> *temp;

	if (!empty())
	{
		T returnValue = queueFront->info;
		temp = queueFront;  //make temp point to the first item

		queueFront = queueFront->next; //advance queueFront 

		delete temp;    //delete the first item

		if (queueFront == nullptr) //if after deletion the queue is empty set queueRear to nullptr
			queueRear = nullptr;
		length--;
		return returnValue;
	}
	else
	{
		cout << "Cannot remove from an empty queue" << endl;
		return NULL;
	}

}//end dequeue


template <class T>
int Queue<T>::size() const
{
	return length;
}