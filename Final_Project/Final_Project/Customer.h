#include <iostream>
#include <string>
#include <cctype>
//#include "customerNode.h"
using namespace std;
//template <class myType>


class Customer {
public:
	Customer(void);	// constructor
	//~Customer(void);	// destructor

	void set_firstName(string fn);
	void set_lastName(string ln);
	void set_paymentMethod(string pm);
	void set_age(int a);
	void set_customerID(int id);

	string get_firstName();
	string get_lastName();
	string get_paymentMethod();
	int get_age();
	int get_customerID();

	void printAll();
	void addCustomer();
	void searchCustomer();
private:
	string firstName;
	string lastName;
	string paymentMethod;	//Cash/Credit
	int age;	
	int customerID;
	
};


#pragma once
#pragma once
