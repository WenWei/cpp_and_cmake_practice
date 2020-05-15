#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age;

public:
	Person() :name("unnamed"), age(0) {};
	Person(string newName) :name("unnamed"), age(0) {};
	Person(string newName, int newAge) :name("unnamed"), age(0) {};
	string toString();
};

#endif