#include "UnSortedType.h"
#include "Node1.h"
#include "Stack.h"
#include "Queue.h"
#include<iostream>
#include <fstream>
#include <sstream>
#include <cassert>
using namespace std;


UnSortedType::UnSortedType()
{
	length = 0; //To keep track of the length to be O(1) otherwise it will be O(n) when we traverse throughout the whole linked list.
	head = NULL;  //The list is essentially empty
}


// ----- Customer Functions -----
void UnSortedType::insertBegCust()
{
	Customer * c = new Customer();
	c->addCustomer();

	Node * newNode = new Node;
	newNode->data = c;
	newNode->next = head;
	head = newNode;
	length++;

	
}


void UnSortedType::displayListCust()
{
	Node *temp;
	temp = head;
	while (temp != NULL)
	{
		temp->data->printAll();
		temp = temp->next;
	}
	cout << endl;
}

void UnSortedType::searchCust() {
	int tempID = 0;

	cout << "Enter customer ID to search for: ";
	cin >> tempID;
	cout << endl;


	if (head == NULL)
	{
		cout << "The list is empty can not find the customer with ID: " << tempID << endl;
	}
	else
	{
		Node* temp = head;
		if (tempID == head->data->get_customerID()) //if the node I am trying to delete is the first node
		{
			temp->data->printAll();
			cout << "Found customer with id: " << tempID << endl;
		}
		else
		{
			while (temp->next != NULL && (tempID != temp->next->data->get_customerID())) //and the next item is not the target
			{
				temp = temp->next;
			}
			Node * target = temp->next;
			if (target != NULL)
			{
				//temp->next = target->next;
				target->data->printAll();
				cout << "Found customer with id: " << tempID << endl;

			}
			else {
				cout << "Couldnt find customer id: " << tempID << " because it is not in our data." << endl;
			}
		}
	}

}

void UnSortedType::deleteSpecificCust() {
	int tempID = 0;
	cout << "Enter customer ID to delete: ";
	cin >> tempID;
	cout << endl;

	if (head == NULL)
	{
		cout << "The list is empty can not delete the item: " << tempID << endl;
	}
	else
	{
		Node* temp = head;
		if (tempID == head->data->get_customerID()) //if the node I am trying to delete is the first node
		{
			head = head->next;
			delete temp;
			length--;
			cout << "Deleted customer with id: " << tempID << endl;
		}
		else
		{
			while (temp->next != NULL && (tempID != temp->next->data->get_customerID())) //and the next item is not the target
			{
				temp = temp->next;
			}
			Node * target = temp->next;
			if (target != NULL)
			{
				temp->next = target->next;
				delete target;
				length--;
				cout << "Deleted customer with id: " << tempID << endl;

			}
			else {
				cout << "Couldnt delete customer id: " << tempID << " because it is not in our data." << endl;
			}
		}
	}

}

void UnSortedType::readInCust()
{
	ifstream myFile;
	string fileName;
	int counter = 0;
	cout << "Enter file to read from: ";
	cin >> fileName;

	myFile.open(fileName);
	while (!myFile.eof()) {
		string line;
		while (getline(myFile, line)) {
			counter++;
		}

	}
	myFile.close();

	myFile.open(fileName);
	for (int i = 0; i<counter; i++) {
		Customer * c = new Customer();

		string firstName;
		string lastName;
		string ageTemp;
		string payment;
		string idTemp;
		int age;
		int id;

		getline(myFile, firstName, ',');
		getline(myFile, lastName, ',');
		getline(myFile, ageTemp, ',');
		getline(myFile, payment, ',');
		getline(myFile, idTemp, '\n');

		stringstream convert1(ageTemp);
		convert1 >> age;

		stringstream convert2(idTemp);
		convert2 >> id;

		c->set_firstName(firstName);
		c->set_lastName(lastName);
		c->set_age(age);
		c->set_paymentMethod(payment);
		c->set_customerID(id);

		Node * newNode = new Node;
		newNode->data = c;
		newNode->next = head;
		head = newNode;
		length++;
	}
	//Node* temp = head;
	//head = head->next;
	//delete temp;
	//length--;
	myFile.close();

}

void UnSortedType::writeOutCust() {

	ofstream myFile;
	string fileName;
	cout << "Enter file to save to: ";
	cin >> fileName;
	myFile.open(fileName);

	Node *temp;
	temp = head;

	while (temp != NULL)
	{
		myFile << temp->data->get_firstName() << ",";
		myFile << temp->data->get_lastName() << ",";
		myFile << temp->data->get_age() << ",";
		myFile << temp->data->get_paymentMethod() << ",";
		myFile << temp->data->get_customerID() << "\n";
		temp = temp->next;
	}



}
//-------------------------------

// ----- Employee Functions -----

void UnSortedType::insertBegEmp()
{
	Employee * e = new Employee();
	e->addEmployee();

	Node * newNode = new Node;
	newNode->data2 = e;
	newNode->next = head;
	head = newNode;
	length++;


}


void UnSortedType::displayListEmp()
{
	Node *temp;
	temp = head;
	while (temp != NULL)
	{
		temp->data2->printAll();
		temp = temp->next;
	}
	cout << endl;
}

void UnSortedType::searchEmp() {
	int tempID = 0;
	//Node *temp;
	//temp = head;

	cout << "Enter employee ID to search for: ";
	cin >> tempID;
	cout << endl;

	if (head == NULL)
	{
		cout << "The list is empty can not find the employee with ID: " << tempID << endl;
	}
	else
	{
		Node* temp = head;
		if (tempID == head->data2->get_employeeID()) //if the node I am trying to delete is the first node
		{
			//head = head->next;
			temp->data2->printAll();
			cout << "Found employee with id: " << tempID << endl;
		}
		else
		{
			while (temp->next != NULL && (tempID != temp->next->data2->get_employeeID())) //and the next item is not the target
			{
				temp = temp->next;
			}
			Node * target = temp->next;
			if (target != NULL)
			{
				//temp->next = target->next;
				target->data2->printAll();
				cout << "Found employee with id: " << tempID << endl;

			}
			else {
				cout << "Couldnt find employee id: " << tempID << " because it is not in our data." << endl;
			}
		}
	}

}

void UnSortedType::deleteSpecificEmp() {
	int tempID = 0;
	cout << "Enter employee ID to delete: ";
	cin >> tempID;
	cout << endl;

	if (head == NULL)
	{
		cout << "The list is empty can not delete the item: " << tempID << endl;
	}
	else
	{
		Node* temp = head;
		if (tempID == head->data2->get_employeeID()) //if the node I am trying to delete is the first node
		{
			head = head->next;
			delete temp;
			length--;
			cout << "Deleted employee with id: " << tempID << endl;
		}
		else
		{
			while (temp->next != NULL && (tempID != temp->next->data2->get_employeeID())) //and the next item is not the target
			{
				temp = temp->next;
			}
			Node * target = temp->next;
			if (target != NULL)
			{
				temp->next = target->next;
				delete target;
				length--;
				cout << "Deleted employee with id: " << tempID << endl;

			}
			else {
				cout << "Couldnt delete employee id: " << tempID << " because it is not in our data." << endl;
			}
		}
	}

}

void UnSortedType::readInEmp()
{
	ifstream myFile;
	string fileName;
	int counter = 0;
	cout << "Enter file to read from: ";
	cin >> fileName;

	myFile.open(fileName);
	while (!myFile.eof()) {
		string line;
		while (getline(myFile, line)) {
			counter++;
		}

	}
	myFile.close();

	Stack<string> myStack1;

	myFile.open(fileName);

	for (int i = 0; i<counter; i++) {

		

		string first;
		string last;
		string SS;
		string ageee;
		string iddd;
		string pppay;

		string payafterpop;
		string idafterpop;
		string ageafterpop;


		string firstName;
		string lastName;
		string social;
		string ageTemp;
		string idTemp;
		string payTemp;
		int age = 0;
		int id = 0;
		double pay = 0.00;

		getline(myFile, first, ',');
		getline(myFile, last, ',');
		getline(myFile, SS, ',');
		getline(myFile, ageee, ',');
		getline(myFile, iddd, ',');
		getline(myFile, pppay, '\n');

		myStack1.push(first);
		myStack1.push(last);
		myStack1.push(SS);
		myStack1.push(ageee);
		myStack1.push(iddd);
		myStack1.push(pppay);

		payafterpop = myStack1.top();
		myStack1.pop();
		idafterpop = myStack1.top();
		myStack1.pop();
		ageafterpop = myStack1.top();
		myStack1.pop();
		social = myStack1.top();
		myStack1.pop();
		lastName = myStack1.top();
		myStack1.pop();
		firstName = myStack1.top();
		myStack1.pop();



		 
		Employee * e = new Employee();

		

		stringstream convert1(ageee);
		convert1 >> age;

		stringstream convert2(idafterpop);
		convert2 >> id;

		stringstream convert3(payafterpop);
		convert3 >> pay;

		e->set_firstName(firstName);
		e->set_lastName(lastName);
		e->set_socialSecurity(social);
		e->set_age(age);
		e->set_employeeID(id);
		e->set_hourlyPay(pay);

		Node * newNode = new Node;
		newNode->data2 = e;
		newNode->next = head;
		head = newNode;
		length++;
	}
	myFile.close();

}

void UnSortedType::writeOutEmp() {

	ofstream myFile;
	string fileName;
	cout << "Enter file to save to: ";
	cin >> fileName;
	myFile.open(fileName);

	Node *temp;
	temp = head;

	while (temp != NULL)
	{
		myFile << temp->data2->get_firstName() << ",";
		myFile << temp->data2->get_lastName() << ",";
		myFile << temp->data2->get_socialSecurity() << ",";
		myFile << temp->data2->get_age() << ",";
		myFile << temp->data2->get_employeeID() << ",";
		myFile << temp->data2->get_hourlyPay() << "\n";
		temp = temp->next;
	}



}
//-------------------------------

//------ Room Functions----------


void UnSortedType::displayListRoom()
{
	Node *temp;
	temp = head;
	while (temp != NULL)
	{
		temp->data3->printAll();
		temp = temp->next;
	}
	cout << endl;
}


void UnSortedType::readInRoom()
{
	ifstream myFile;
	string fileName;
	int counter = 0;
	cout << "Enter file to read from: ";
	cin >> fileName;

	myFile.open(fileName);
	while (!myFile.eof()) {
		string line;
		while (getline(myFile, line)) {
			counter++;
		}

	}
	myFile.close();

	Queue<string> myQueue;

	myFile.open(fileName);
	for (int i = 0; i<counter; i++) {
		string roomNumTemp;
		string numOfBedsTemp;
		string roomType;
		string availibility;
		int roomNum=0;
		int numofBeds=0;

		string tempRoomNum;
		string tempNumBed;
		string tempRoomType;
		string tempavailibility;
		

		getline(myFile, roomNumTemp, ',');
		getline(myFile, numOfBedsTemp, ',');
		getline(myFile, roomType, ',');
		getline(myFile, availibility, '\n');

		myQueue.enqueue(roomNumTemp);
		myQueue.enqueue(numOfBedsTemp);
		myQueue.enqueue(roomType);
		myQueue.enqueue(availibility);

		tempRoomNum = myQueue.front();
		myQueue.dequeue();
		numOfBedsTemp = myQueue.front();
		myQueue.dequeue();
		tempRoomType = myQueue.front();
		myQueue.dequeue();
		tempavailibility = myQueue.front();
		myQueue.dequeue();

		Room * r = new Room(); //Create a room instance


		stringstream convert1(roomNumTemp);
		convert1 >> roomNum;

		stringstream convert2(numOfBedsTemp);
		convert2 >> numofBeds;

		r->set_roomNumber(roomNum);
		r->set_numOfBeds(numofBeds);
		r->set_roomType(roomType);
		r->set_availibility(availibility);

		Node * newNode = new Node;
		newNode->data3 = r;
		newNode->next = head;
		head = newNode;
		length++;
	}
	myFile.close();

}

void UnSortedType::writeOutRoom() {

	ofstream myFile;
	string fileName;
	cout << "Enter file to save to: ";
	cin >> fileName;
	myFile.open(fileName);

	Node *temp;
	temp = head;

	while (temp != NULL)
	{
		myFile << temp->data3->get_roomNumber() << ",";
		myFile << temp->data3->get_numOfBeds() << ",";
		myFile << temp->data3->get_roomType() << ",";
		myFile << temp->data3->get_availibility() << "\n";
		temp = temp->next;
	}



}

void UnSortedType::displayListRoomAvail()
{
	Node *temp;
	temp = head;
	while (temp != NULL)
	{
		temp->data3->printAvailible();
		temp = temp->next;
	}
	cout << endl;
}

void UnSortedType::searchRoom() {
	int tempRoomNum = 0;

	cout << "Enter room number to search for: ";
	cin >> tempRoomNum;
	cout << endl;

	if (head == NULL)
	{
		cout << "The list is empty can not find the room numbered: " << tempRoomNum << endl;
	}
	else
	{
		Node* temp = head;
		if (tempRoomNum == head->data3->get_roomNumber())
		{
			//head = head->next;
			temp->data3->printAll();
			cout << "Found room numbered: " << tempRoomNum << endl;
		}
		else
		{
			while (temp->next != NULL && (tempRoomNum != temp->next->data3->get_roomNumber()))
			{
				temp = temp->next;
			}
			Node * target = temp->next;
			if (target != NULL)
			{
				//temp->next = target->next;
				target->data3->printAll();
				cout << "Found room numbered: " << tempRoomNum << endl;

			}
			else {
				cout << "Couldnt find room numbered: " << tempRoomNum << " because it is not in our data." << endl;
			}
		}
	}

}
