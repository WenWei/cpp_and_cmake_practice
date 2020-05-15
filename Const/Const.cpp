#include <iostream>
using namespace std;

class Animal {
private:
	string name;

public:
	void setName(string name) { this->name = name; };
	void speak() { cout << "My name is:" << name << endl; }

	//宣告為不會異動資料的函式，如果函式中會修改資料，則編譯會失敗
	//void speak() const { name = "Bob"; cout << "My name is:" << name << endl; }
};

int main() {
	const double PI = 3.141592;
	cout << PI << endl;

	Animal animal;
	animal.setName("Freddy");
	animal.speak();

	int value = 8;
	int* pValue = &value;
	//int* const pValue = &value;
	//const int* pValue = &value;
	//const int* const pValue = &value;

	cout << *pValue << endl;

	int number = 11;
	// Both lines Error with this: const int* const pValue = &value;
	pValue = &number; // Error with this: int * const pValue = &value;
	*pValue = 12; // Error with this: const int *pValue = &value;
	
	cout << *pValue << endl;

	return 0;
}