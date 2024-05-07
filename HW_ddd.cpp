#include <iostream>
using namespace std;

class Pet
{
	string name;
public:
	Pet(const string& name) : name(name) {}
	void Sound()
	{

	}

	void Show()
	{
		cout << "Name: " << name << endl;
	}
	void Type()
	{

	}
};

class Dog : public Pet
{
public:
	Dog(const string& name) : Pet(name){}

	void Sound()
	{
		cout << "gav, gav" << endl;
	}
	void Type()
	{
		cout << "Type: Dog" << endl;
	}
};

class Cat : public Pet
{
public:
	Cat(const string& name) : Pet(name){}

	void Sound()
	{
		cout << "moew, moew" << endl;
	}
	void Type()
	{
		cout << "Type: cat" << endl;
	}

};

class Parrot : public Pet
{
public:
	Parrot(const string& name) : Pet(name){}

	void Sound()
	{
		cout << "cheek-cherek" << endl;
	}
	void Type()
	{
		cout << "Type: Parrot" << endl;
	}
};

class Hamster : public Pet
{
public:
	Hamster(const string& name): Pet(name){}

	void Sound()
	{
		cout << "peeeeee, peeeeeee" << endl;
	}
	void Type()
	{
		cout << "Type: Hamster" << endl;
	}
};



int main()
{
	// Создаем объекты различных домашних животных и вызываем их функции
	Dog dog("bobik");
	Cat cat("Wiskas");
	Parrot parrot("pernatyi");
	Hamster hamster("shell");

	cout << "Dog:" << endl;
	dog.Show();
	dog.Type();
	dog.Sound();

	cout << "\nCat:" << endl;
	cat.Show();
	cat.Type();
	cat.Sound();

	cout << "\nParrot:" << endl;
	parrot.Show();
	parrot.Type();
	parrot.Sound();

	cout << "\nHamster:" << endl;
	hamster.Show();
	hamster.Type();
	hamster.Sound();

	return 0;
}