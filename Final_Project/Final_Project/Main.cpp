//Matt Demaio - Mike Goldberg - Vincent Grippa
//Final project Final Version

#include "menu.h"
#include "splash.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	system("mode 650");
	system("Color 1A");
	system("cls");

	//http://www.kammerl.de/ascii/AsciiSignature.php
	string art = "";

	art += "���������                                              �������� \n";
	art += "��۰�������                                            ��۰������\n";
	art += "���     ���  ��������   ������  ����� ���� ��������    ����   ���\n";
	art += "����         ����۰���� ��۰���۰���� ���� ����۰����   ����������\n";
	art += "����    ����� ���� ��� ���� ���� ���� ����  ���� ����   ���۰������\n";
	art += "�����  �����  ����     ���� ���� ���� ����  ���� ����   ����   ����\n";
	art += "�����������  �����    ��������  ���������� ��������    ����������\n";
	art += "���������  �����      ������    ��������  ���۰��      ��������\n";
	art += "                                          ����\n";
	art += "                                          �����\n";
	art += "                                          �����\n";

	cout << art;
	cin.get();
	splashScreen();
	mainMenu();
	return 0;
}
