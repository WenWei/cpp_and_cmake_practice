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

int main() {
	Animal *pCat1 = new Animal();
	
	pCat1->setName("Cat");
	pCat1->speak();
	delete pCat1; // 如果是使用 new 建立的，都要養成習慣 delete，會執行 destructor.

	cout << sizeof(pCat1) << endl;

	return 0;
}