#pragma once

namespace cww {

void saySomething();

class Cat {
public:
  Cat();
  void speak();
  virtual ~Cat();
};
} // namespace cww