#include "Node.h"
//template <class myType>
class UnSortedType {
public:
	UnSortedType(void);	// constructor
	//~UnSortedType(void);	// destructor

	// ----- Customer Functions -----
	void insertBegCust();
	void displayListCust();
	void searchCust();
	void deleteSpecificCust();
	void readInCust();
	void writeOutCust();
	//-------------------------------

	// ----- Employee Functions -----
	void insertBegEmp();
	void displayListEmp();
	void searchEmp();
	void deleteSpecificEmp();
	void readInEmp();
	void writeOutEmp();
	//-------------------------------

	// ----- Room Functions -----
	void displayListRoom();
	void readInRoom();
	void writeOutRoom();
	void displayListRoomAvail();
	void searchRoom();
	void changeAvailibility();
	//-------------------------------

	//bool isEmpty() const;
	//bool isFull() const;
	//void makeEmpty();
	//void deleteBeg();
	//void deleteEnd();
	//void orderedInsert(double item);		//These will need to be generic so we can use employee/cust/room types instead of double...
	//void insertEnd(double item);
	//void insertNode(int pos, double item);
	//int findNode(double x);
	//void deleteNode(double x);
	//void deleteAtPosition(int pos);
	//int getLength() const;
private:
	int length;
	Node* head;
	//template <class myType>;
};
#pragma once
