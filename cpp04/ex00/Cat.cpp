#include "Cat.hpp"

Cat::Cat() {
  type = "Cat";
  std::cout << "Cat Default constructor called" << std::endl;
}

Cat::~Cat() {
  std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(const Cat &c) {
  std::cout << "Cat Copy constructor called" << std::endl;
  *this = c;
}

Cat &Cat::operator=(const Cat &c) {
  std::cout << "Cat Copy assignment operator called" << std::endl;
  if (this != &c) 
    this->type = c.type;
  return *this;
}

void Cat::makeSound() const{
  std::cout << "Meow" << std::endl;
}
