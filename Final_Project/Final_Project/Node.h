//Node.h
#include "Customer.h"
#include "Employee.h"
#include "Room.h"
#ifndef NODE_H
#define NODE_H


struct Node
{

	Customer* data;//Customer data
	Employee* data2;//Employee data
	Room* data3;//Room data

	Node* next;	//pointer to next
};

#endif

