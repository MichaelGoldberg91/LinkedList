#include "Room.h"
#include<iostream>
using namespace std;

//O(1)
Room::Room()
{
	roomNumber = 000;
	numOfBeds = 0;
	roomType = "Default";
	availibility = "Yes";
}


void Room::set_roomNumber(int rn)
{
	roomNumber = rn;
}

void Room::set_numOfBeds(int nob)
{
	numOfBeds = nob;
}

void Room::set_roomType(string rt)
{
	roomType = rt;
}

void Room::set_availibility(string &a)
{
	availibility = a;
}


int Room::get_roomNumber()
{
	return roomNumber;
}

int Room::get_numOfBeds()
{
	return numOfBeds;
}

string Room::get_roomType()
{
	return roomType;
}

string Room::get_availibility()
{
	return availibility;
}


void Room::printAll() {

	cout << "Room number:" << roomNumber << endl;
	cout << "Number of beds:" << numOfBeds << endl;
	cout << "Room type:" << roomType << endl;
	cout << "availible?:" << availibility << endl << endl;
}

void Room::printAvailible() {
	if (availibility == "Y") {
		cout << "Room number:" << roomNumber << endl;
		cout << "Number of beds:" << numOfBeds << endl;
		cout << "Room type:" << roomType << endl;
		cout << "availible?:" << availibility << endl << endl;
	}
}


