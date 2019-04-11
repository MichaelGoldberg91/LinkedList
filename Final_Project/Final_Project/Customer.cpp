#include "Customer.h"
#include<iostream>
using namespace std;

//O(1)
Customer::Customer()
{                                                  
	firstName = "Default";
	lastName = "Default";
	paymentMethod = "Default";
	age = 0;
	customerID = 000;
}


void Customer::set_firstName(string fn)
{
	firstName = fn;
}

void Customer::set_lastName(string ln)
{
	lastName = ln;
}

void Customer::set_paymentMethod(string pm)
{
	paymentMethod = pm;
}

void Customer::set_age(int a)
{
	age = a;
}

void Customer::set_customerID(int id)
{
	customerID = id;
}

string Customer::get_firstName()
{
	return firstName;
}

string Customer::get_lastName()
{
	return lastName;
}

string Customer::get_paymentMethod()
{
	return paymentMethod;
}

int Customer::get_age()
{
	return age;
}

int Customer::get_customerID()
{
	return customerID;
}

void Customer::printAll() {

	cout << "First name:" << firstName << endl;
	cout << "Last Name:" << lastName << endl;
	cout << "Payment Method:" << paymentMethod << endl;
	cout << "age:" << age << endl;
	cout << "ID:" << customerID << endl << endl;

}

void Customer::addCustomer() {
	//Customer* c = new Customer();
	cout << "Enter first name: ";
	cin >> firstName;
	//c->set_firstName(firstName);
	cout << endl;

	cout << "Enter last name: ";
	cin >> lastName;
	//c->set_lastName(lastName);
	cout << endl;

	cout << "Enter age: ";
	cin >> age;
	while (!cin) {
		cin.clear();
		cin.ignore(999, '\n');
		cout << "Invalid entry... re-enter: ";
		cin >> age;
	}
	cout << endl;

	cout << "Enter payment type: ";
	cin >> paymentMethod;
	//c->set_paymentMethod(paymentMethod);
	cout << endl;

	cout << "Enter id: ";
	cin >> customerID;
	while (!cin) {
		cin.clear();
		cin.ignore(999, '\n');
		cout << "Invalid entry... re-enter: ";
		cin >> customerID;
	}
	cout << endl;


}

/*void Customer::searchCustomer() {
	int id;
	
	cout << "Enter customer ID: ";
	cin >> id;

	if (id == customerID) {

		cout << "First name:" << firstName << endl;
		cout << "Last Name:" << lastName << endl;
		cout << "Payment Method:" << paymentMethod << endl;
		cout << "age:" << age << endl;
		cout << "ID:" << customerID << endl << endl;

	}

}*/