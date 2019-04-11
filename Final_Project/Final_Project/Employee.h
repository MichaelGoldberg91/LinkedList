#include <iostream>
#include <string>
#include <cctype>
//#include "customerNode.h"
using namespace std;
//template <class myType>


class Employee {
public:
	Employee(void);	// constructor
		

	void set_firstName(string fn);
	void set_lastName(string ln);
	void set_socialSecurity(string ss);
	void set_age(int a);
	void set_employeeID(int id);
	void set_hourlyPay(double hp);

	string get_firstName();
	string get_lastName();
	string get_socialSecurity();
	int get_age();
	int get_employeeID();
	double get_hourlyPay();

	void printAll();
	void addEmployee();
	void searchEmployee();
private:
	string firstName;
	string lastName;
	string socialSecurity;	//Cash/Credit
	int age;
	int employeeID;
	double hourlyPay;
};


#pragma once
#pragma once

