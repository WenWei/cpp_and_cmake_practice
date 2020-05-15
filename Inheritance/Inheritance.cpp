#include <iostream>
using namespace std;

class Animal {
public:
  void speak() { cout << "meow" << endl; }
};

// 繼承 Animal
class Cat : public Animal {
public:
  void jump() { cout << "Cat jumping!" << endl; }
};

class Tiger : public Cat {
public:
  void attackAntelope() { cout << "Attacking!" << endl; }
};

int main() {
  Animal a;
  a.speak();

  Cat cat;
  cat.speak();
  cat.jump();

  Tiger tiger;
  tiger.speak();
  tiger.jump();
  tiger.attackAntelope();

  return 0;
}