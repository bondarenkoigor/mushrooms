#include<iostream>
#include<Windows.h>
#include"c_plantation.h"

using namespace std;

int main() 
{
	setlocale(LC_ALL, "rus");
	c_plantation plantation;
	int choice;
	do
	{
		system("cls");
		cout << "1 - ������ ������ �� ���������\n"
			<< "2 - �������� ����\n"
			<< "3 - ��������� �����\n"
			<< "4 - ������� �����\n"
			<< "0 - �����\n";
		cin >> choice;
		system("cls");
		switch (choice)
		{
		case 1:
			plantation.print();
			system("pause");
			break;
		case 2:
			plantation.add(new c_mushroom());
			cout << "���� ��������\n";
			Sleep(500);
			break;
		case 3:
			plantation.grow();
			cout << "����� ������� �� 25%\n";
			Sleep(500);
			break;
		case 4:
			plantation.collect();
			cout << "����� �������\n";
			Sleep(500);
			break;
		}
	} while (choice != 0);
}