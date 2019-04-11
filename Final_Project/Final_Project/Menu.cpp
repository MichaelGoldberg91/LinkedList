#include <iostream>
#include "Utilities.h"
#include <string>
#include <cctype>
#include "Customer.h"
#include "UnSortedType.h"
#include "Employee.h"
using namespace std;


void Customers()
{
	UnSortedType Customers;
	Customers.readInCust();

	system("Color 2B");
	system("CLS");
	gotoxy(50, 9);
	cout << "***************************************************************" << endl;
	gotoxy(50, 10);
	cout << "*                                                             *" << endl;
	gotoxy(50, 11);
	cout << "*                                                             *" << endl;
	gotoxy(50, 12);
	cout << "*                                                             *" << endl;
	gotoxy(50, 13);
	cout << "*                             Customers                       *" << endl;
	gotoxy(50, 14);
	cout << "*                                                             *" << endl;
	gotoxy(50, 15);
	cout << "*                                                             *" << endl;
	gotoxy(50, 16);
	cout << "*                                                             *" << endl;
	gotoxy(50, 17);
	cout << "***************************************************************" << endl;
	gotoxy(50, 18);
	system("PAUSE");
	system("CLS");

	char selection;
	do
		{
			system("Color 1A");
			system("CLS");
			gotoxy(50, 9);
			cout << " Farmingdale Hotel Guest Menu\n";
			gotoxy(50, 10);
			cout << " ====================================\n";
			gotoxy(50, 11);
			cout << " 1. Guest Registration\n";
			gotoxy(50, 12);
			cout << " 2. Check Out Guest\n";
			gotoxy(50, 13);
			cout << " 3. Search For Guest\n";
			gotoxy(50, 14);
			cout << " 4. Display Guests\n";
			gotoxy(50, 15);
			cout << " 5. Exit\n";
			gotoxy(50, 18);
			cout << " ====================================\n";
			gotoxy(50, 19);
			cout << " Enter your selection: ";
			cin >> selection;
			cout << endl;

			switch (selection)
			{
			case '1':
				cout << "Adding new customer.." << endl;
				cout << "*********************" << endl;
				Customers.insertBegCust();
				break;

			case '2':
				cout << "Deleting existing customer.." << endl;
				cout << "****************************" << endl;
				Customers.deleteSpecificCust();
				system("pause");
				break;
			case '3':
				cout << "Performing search..." << endl;
				cout << "********************" << endl;
				Customers.searchCust();
				system("pause");
				break;

			case '4':
				cout << "Displaying all current customers..." << endl;
				cout << "***********************************" << endl;
				Customers.displayListCust();
				system("pause");
				break;
			
			case '5':
				Customers.writeOutCust();
				cout << "Menu exited by user choice.\n";
				system("pause");
				return;

			default: cout << selection << " is not a valid menu item.\n";

				cout << endl;
			}

		} while (selection != 5);



}//End Customer Menu


void Employees()
{
	UnSortedType Employees;
	Employees.readInEmp();

	system("Color 2B");
	system("CLS");
	gotoxy(50, 9);
	cout << "***************************************************************" << endl;
	gotoxy(50, 10);
	cout << "*                                                             *" << endl;
	gotoxy(50, 11);
	cout << "*                                                             *" << endl;
	gotoxy(50, 12);
	cout << "*                                                             *" << endl;
	gotoxy(50, 13);
	cout << "*                             Employees                       *" << endl;
	gotoxy(50, 14);
	cout << "*                                                             *" << endl;
	gotoxy(50, 15);
	cout << "*                                                             *" << endl;
	gotoxy(50, 16);
	cout << "*                                                             *" << endl;
	gotoxy(50, 17);
	cout << "***************************************************************" << endl;
	gotoxy(50, 18);
	system("PAUSE");
	system("CLS");

	char selection;
	do
	{
		system("Color 3A");
		system("CLS");
		gotoxy(50, 9);
		cout << " Farmingdale Hotel Employee Menu\n";
		gotoxy(50, 10);
		cout << " ====================================\n";
		gotoxy(50, 11);
		cout << " 1. Hire New Employee\n";
		gotoxy(50, 12);
		cout << " 2. Terminate Employee\n";
		gotoxy(50, 13);
		cout << " 3. Search Employee\n";
		gotoxy(50, 14);
		cout << " 4. Display Employees\n";
		gotoxy(50, 15);
		cout << " 5. Exit\n";
		gotoxy(50, 18);
		cout << " ====================================\n";
		gotoxy(50, 19);
		cout << " Enter your selection: ";
		cin >> selection;
		cout << endl;

		switch (selection)
		{
		case '1':
			cout << "Adding new employee.." << endl;
			cout << "*********************" << endl;
			Employees.insertBegEmp();
			break;

		case '2':
			cout << "Deleting existing employee.." << endl;
			cout << "****************************" << endl;
			Employees.deleteSpecificEmp();
			system("pause");
			break;

		case '3':
			cout << "Performing search..." << endl;
			cout << "********************" << endl;
			Employees.searchEmp();
			system("pause");
			break;

		case '4':
			cout << "Displaying all current employees..." << endl;
			cout << "***********************************" << endl;
			Employees.displayListEmp();
			system("pause");
			break;

		case '5':
			Employees.writeOutEmp();
			cout << "Menu exited by user choice.\n";
			system("pause");
			return;

		default: cout << selection << " is not a valid menu item.\n";

			cout << endl;
		}

	} while (selection != 5);

}//End Employee Menu


void roomInfo()
{
	UnSortedType Rooms;
	Rooms.readInRoom();

	system("Color 2B");
	system("CLS");
	gotoxy(50, 9);
	cout << "***************************************************************" << endl;
	gotoxy(50, 10);
	cout << "*                                                             *" << endl;
	gotoxy(50, 11);
	cout << "*                                                             *" << endl;
	gotoxy(50, 12);
	cout << "*                                                             *" << endl;
	gotoxy(50, 13);
	cout << "*                             Room Info                       *" << endl;
	gotoxy(50, 14);
	cout << "*                                                             *" << endl;
	gotoxy(50, 15);
	cout << "*                                                             *" << endl;
	gotoxy(50, 16);
	cout << "*                                                             *" << endl;
	gotoxy(50, 17);
	cout << "***************************************************************" << endl;
	gotoxy(50, 18);
	system("PAUSE");
	system("CLS");

	char selection;
	do
	{
		system("Color 4A");
		system("CLS");
		gotoxy(50, 9);
		cout << " Farmingdale Hotel Room Info Menu\n";
		gotoxy(50, 10);
		cout << " ====================================\n";
		gotoxy(50, 11);
		cout << " 1. Display available rooms.\n";	//Print rooms where availibilty == 'Y'
		gotoxy(50, 12);
		cout << " 2. Search for specific room.\n";	//Search for room based on room #.
		gotoxy(50, 13);
		cout << " 3. Display all rooms.\n"; // Display all rooms
		gotoxy(50, 14);
		cout << " 4. Exit\n";
		gotoxy(50, 15);
		cout << " ====================================\n";
		gotoxy(50, 19);
		cout << " Enter your selection: ";
		cin >> selection;
		cout << endl;

		switch (selection)
		{
		case '1':
			cout << "Displaying available rooms.." << endl;
			cout << "****************************" << endl;
			Rooms.displayListRoomAvail();
			system("pause");
			break;

		case '2':
			cout << "Searching for room.." << endl;
			cout << "********************" << endl;
			Rooms.searchRoom();
			system("pause");
			break;
		
		case '3':
			cout << "Displaying all rooms.." << endl;
			cout << "******************************" << endl;
			Rooms.displayListRoom();
			system("pause");
			break;
		
		case '4':
			Rooms.writeOutRoom();
			cout << "Menu exited by user choice.\n";
			system("pause");
			return;

		default: cout << selection << " is not a valid menu item.\n";

			cout << endl;
		}

	} while (selection != 4);

}//End Room Info Menu

void mainMenu()
{
	char selection;

	do
	{
		system("Color 1A");
		system("CLS");
		gotoxy(50, 9);
		cout << " Farmingdale Hotel Menu\n";
		gotoxy(50, 10);
		cout << " ====================================\n";
		gotoxy(50, 11);
		cout << " 1. Guest Info\n";
		gotoxy(50, 12);
		cout << " 2. Employee Info\n";
		gotoxy(50, 13);
		cout << " 3. Room Information\n";
		gotoxy(50, 14);
		cout << " 4. Exit\n";
		gotoxy(50, 17);
		cout << " ====================================\n";
		gotoxy(50, 18);
		cout << " Enter your selection: ";
		cin >> selection;
		cout << endl;

		switch (selection)
		{
		case '1':
			Customers();
			break;

		case '2':
			Employees();
			break;
		case '3':
			roomInfo();
			break;

		case '4':
			cout << "Program Ended by user choice.\nGoodbye.\n";
			system("pause");
			return;
			
		default: cout << selection << " is not a valid menu item.\n";

			cout << endl;
		}

	} while (selection != 4);


}//End mainMenu