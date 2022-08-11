#include "Cat.hpp"

Cat::Cat() {
  std::cout << "Cat Default constructor called" << std::endl;
  type = "Cat";
  this->list = new Brain();
}

Cat::~Cat() {
  std::cout << "Cat Destructor called" << std::endl;
  delete this->list;
}

Cat::Cat(const Cat &c) {
  std::cout << "Cat Copy constructor called" << std::endl;
  *this = c;
}

Cat &Cat::operator=(const Cat &c) {
  std::cout << "Cat Copy assignment operator called" << std::endl;
  delete this->list;
  this->list = new Brain();
  this->list->setIdeas(c.list->ideas);
  if (this != &c) 
    this->type = c.type;
  return *this;
}

void Cat::makeSound() const{
  std::cout << "Meow" << std::endl;
}
