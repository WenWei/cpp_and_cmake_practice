#include <iostream>
using namespace std;

class Animal {
private:
	string name;

public:
	Animal() { cout << "Animal created." << endl; }

	// Copy constructor
	Animal(const Animal& other) :name(other.name) { cout << "Animal created by copying." << endl; }

	void setName(string name) { this->name = name; }
	//這裡有加 const 才能在 copy constructor 使用，但這個範例不需要
	void speak() const { cout << "My name is:" << name << endl; }
};

int main() {
	Animal animal1;

	animal1.setName("Cat");

	// 這裡執行的是 copy constructor
	Animal animal2 = animal1;

	animal2.setName("Dog");


	animal1.speak();
	animal2.speak();

	// 另一種方式
	Animal animal3(animal1);
	animal3.speak();

	return 0;
}