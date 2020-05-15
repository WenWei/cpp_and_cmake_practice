#include <iostream>

#include "Animal.h"
#include "Cat.h"

using namespace std;
using namespace cats;

int main() {
  Cat cat;
  cat.speak();

  o9::Cat cat2;
  cat2.speak();

  cats::Cat cat3;
  cat3.speak();

  cout << o9::CATNAME << endl;
  cout << cats::CATNAME << endl;

  return 0;
}