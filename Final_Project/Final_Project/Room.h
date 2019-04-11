#include <iostream>
#include <string>
#include <cctype>
//#include "customerNode.h"
using namespace std;
//template <class myType>


class Room {
public:
	Room(void);	// constructor

	void set_roomNumber(int rn);
	void set_numOfBeds(int nob);
	void set_roomType(string rt);
	void set_availibility(string &a);

	int get_roomNumber();
	int get_numOfBeds();
	string get_roomType();
	string get_availibility();

	void printAll();
	void printAvailible();
private:
	int roomNumber; //Essentially ID
	int numOfBeds;
	string roomType;
	string availibility; //Y or N

};


#pragma once
#pragma once

