#include<iostream>
#include <algorithm> 
#include<windows.h> 
using namespace std;

struct StrStudent
{
	char name[32];
	char surname[32];
	int age;
	int year;
	int month;
	int day;
};

void showData(const StrStudent Obj[], int amount)
{
	system("cls"); // сработает только для windows
	cout << "№\t" << "Имя\t" << "Фамилия\t" << "Возраст\t" << "Год\t" << "Месяц\t" << "День" << endl;
	cout << "==================================================================" << endl;
	for (int i = 0; i < amount; i++)
	{
		cout << i + 1
			<< '\t' << Obj[i].name
			<< '\t' << Obj[i].surname
			<< '\t' << Obj[i].age
			<< '\t' << Obj[i].year
			<< '\t' << Obj[i].month
			<< '\t' << Obj[i].day << endl;
	}
}

void showData(const StrStudent Obj[], int amount);

void push(StrStudent& Obj, int i)
{
	cout << "Имя: ";
	cin >> Obj[i]->name;
	cout << "Фамилия: ";
	cin >> Obj[i]->surname;
	cout << "Возраст: ";
	cin >> Obj[i]->age;
	cout << "Год рождения: ";
	cin >> Obj[i]->year;
	cout << "Месяц: ";
	cin >> Obj[i]->month;
	cout << "День: ";
	cin >> Obj[i]->day;
	
}
int main()
{
	setlocale(LC_ALL, "rus");
	StrStudent Student[5] = {};

	//for (int i = 0; i < 5; i++)
	//{
	//	cout << "Имя: ";
	//	cin.getline(Student[i].name, 32);
	//	cout << "Фамилия: ";
	//	cin.getline(Student[i].surname, 32);
	//	cout << "Возраст: ";
	//	cin >> Student[i].age;
	//	cout << "Год рождения: ";
	//	cin >> Student[i].year;
	//	cout << "Месяц: ";
	//	cin >> Student[i].month;
	//	cout << "День: ";
	//	cin >> Student[i].day;
	//
	//	cin.get(); // считывает из потока Enter который пользователь нажимает после ввода возраста
	//	cout << endl;
	//}

	push(&Student, 0);
	
	return 0;


}

