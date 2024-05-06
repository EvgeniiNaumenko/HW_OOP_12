#pragma once
#pragma once
#include <iostream>
using namespace std;


//Створити базовий клас «Домашня тварина» і похідні
class Pet
{
	string _name;
	int _age;
	float _weight;
public:
	Pet();
	Pet(string, int, float);
	void setName(string);
	void setAge(int);
	void setWeight(float);
	string getName();
	int getAge();
	float getWeight();
};
//класи «Собака», «Кішка», «Папуга», «Хом’як».За допомогою конструктора встановити ім’я кожної тварини і її
//характеристики.
class Dog : public Pet
{
	string _breed;
	string _say;
public:
	Dog();
	Dog(string,string);
	Dog(string, int, float, string,string);
	void setBreed(string);
	string getBreed();
	void info();
	void sound();			//■ Sound — видає звук тварини(пишемо текстом в консоль);
	void show();			//■ Show — виводить на екран ім’я тварини;
	void type();			//■ Type — виводить на екран назву її підвиду.
};
//класи «Собака», «Кішка», «Папуга», «Хом’як».За допомогою конструктора встановити ім’я кожної тварини і її
//характеристики.
class Cat : public Pet
{
	string _breed;
public:
	Cat();
	Cat(string);
	Cat(string, int, float, string);
	void setBreed(string);
	string getBreed();
	void info();
};
//класи «Собака», «Кішка», «Папуга», «Хом’як».За допомогою конструктора встановити ім’я кожної тварини і її
//характеристики.
class Parrot : public Pet
{
	string _breed;
public:
	Parrot();
	Parrot(string);
	Parrot(string, int, float, string);
	void setBreed(string);
	string getBreed();
	void info();
};

//класи «Собака», «Кішка», «Папуга», «Хом’як».За допомогою конструктора встановити ім’я кожної тварини і її
//характеристики.

class Humster : public Pet
{
	string _breed;
public:
	Humster();
	Humster(string);
	Humster(string, int, float, string);
	void setBreed(string);
	string getBreed();
	void info();
};