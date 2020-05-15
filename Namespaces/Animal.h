#pragma once

#include <iostream>
using namespace std;


namespace o9 {
const string CATNAME = "Alice";

class Cat {
 public:
  Cat();
  virtual ~Cat();
  void speak();
};
}  // namespace o9