//Завдання №1
//Створити базовий клас список.Реалізувати на базі
//списку стек і чергу з віртуальними функціями вставлення
//і видалення.
//
//
//Завдання №2
//Створити базовий клас «Домашня тварина» і похідні
//класи «Собака», «Кішка», «Папуга», «Хом’як».За допомогою конструктора встановити ім’я кожної тварини і її
//характеристики.
//Реалізуйте для кожного з класів функції :
//■ Sound — видає звук тварини(пишемо текстом в консоль);
//■ Show — виводить на екран ім’я тварини;
//■ Type — виводить на екран назву її підвиду.

#include <iostream>
using namespace std;
#include "Pet.h"
#include "BaseList.h"
#include "ListElement.h"


int main() {

	Dog dog1("Dollar",5,15,"English Cocker Spaniel","gav gav");
	dog1.show();
	dog1.sound();
	dog1.type();

	//Обычный список
	ListElement el1(10);
	ListElement el2(15);
	ListElement el3(20);
	BaseList bList(&el1);
	bList.show();
	bList.add(&el2);
	bList.add(&el3);
	bList.showAll();


	return 0;
}