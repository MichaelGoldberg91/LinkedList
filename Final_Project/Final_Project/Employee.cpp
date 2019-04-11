#include "Employee.h"
#include<iostream>
using namespace std;

//O(1)
Employee::Employee()
{
	firstName = "Default";
	lastName = "Default";
	socialSecurity = "Default";
	age = 0;
	employeeID = 000;
	hourlyPay = 0.00;
}


void Employee::set_firstName(string fn)
{
	firstName = fn;
}

void Employee::set_lastName(string ln)
{
	lastName = ln;
}

void Employee::set_socialSecurity(string ss)
{
	socialSecurity = ss;
}

void Employee::set_age(int a)
{
	age = a;
}

void Employee::set_employeeID(int id)
{
	employeeID = id;
}

void Employee::set_hourlyPay(double hp) {

	hourlyPay = hp;
}

string Employee::get_firstName()
{
	return firstName;
}

string Employee::get_lastName()
{
	return lastName;
}

string Employee::get_socialSecurity()
{
	return socialSecurity;
}

int Employee::get_age()
{
	return age;
}

int Employee::get_employeeID()
{
	return employeeID;
}

double Employee::get_hourlyPay() {

	return hourlyPay;
}

void Employee::printAll() {

	cout << "First name:" << firstName << endl;
	cout << "Last Name:" << lastName << endl;
	cout << "Social Security:" << socialSecurity << endl;
	cout << "age:" << age << endl;
	cout << "ID:" << employeeID << endl;
	cout << "Hourly Pay:" << hourlyPay << endl << endl;
}

void Employee::addEmployee() {
	
	cout << "Enter first name: ";
	cin >> firstName;
	cout << endl;

	cout << "Enter last name: ";
	cin >> lastName;
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

	cout << "Enter social security: ";
	cin >> socialSecurity;
	cout << endl;

	cout << "Enter id: ";
	cin >> employeeID;
	while (!cin) {
		cin.clear();
		cin.ignore(999, '\n');
		cout << "Invalid entry... re-enter: ";
		cin >> employeeID;
	}
	cout << endl;

	cout << "Enter pay rate: ";
	cin >> hourlyPay;
	while (!cin) {
		cin.clear();
		cin.ignore(999, '\n');
		cout << "Invalid entry... re-enter: ";
		cin >> hourlyPay;
	}
	cout << endl;


}