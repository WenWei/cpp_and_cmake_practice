#include "Cat.h"
#include <iostream>

namespace cww {
void saySomething() { std::cout << "Hello there!!!" << std::endl; }

Cat::Cat() {}

void Cat::speak() { std::cout << "Meeeouwwww!" << std::endl; }

Cat::~Cat() {}

} // namespace cww
