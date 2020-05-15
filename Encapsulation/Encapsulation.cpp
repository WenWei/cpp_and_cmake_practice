
#include <iostream>
using namespace std;

class Frog {
private:
	string name;
public:
	Frog(string name) :name(name) {};

	void info(){ cout << "My name is: "<< name << endl; }
};

int main() {
	Frog frog("Alice");
	
	frog.info();

	return 0;
}