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
		cout << "1 - список грибов на плантации\n"
			<< "2 - добавить гриб\n"
			<< "3 - вырастить грибы\n"
			<< "4 - собрать грибы\n"
			<< "0 - выход\n";
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
			cout << "Гриб добавлен\n";
			Sleep(500);
			break;
		case 3:
			plantation.grow();
			cout << "Грибы выросли на 25%\n";
			Sleep(500);
			break;
		case 4:
			plantation.collect();
			cout << "Грибы собраны\n";
			Sleep(500);
			break;
		}
	} while (choice != 0);
}