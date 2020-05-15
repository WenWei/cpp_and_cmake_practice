#include <iostream>
using namespace std;

class Animal {
private:
	string name;

public:
	Animal() { cout << "Animal created." << endl; }
	Animal(const Animal& other) :name(other.name) { cout << "Animal created by copying." << endl; }
	~Animal() { cout << "Destructor called." << endl; }
	void setName(string name) { this->name = name; }
	void speak() { cout << "My name is: " << name << endl; }
};

Animal* createAnimal() {
	Animal* pAnimal = new Animal();
	pAnimal->setName("dog");
	return pAnimal;
}

int main() {
	Animal* pDog = createAnimal();
	pDog->speak();

	delete pDog;

	return 0;
}