#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Dog Default constructor called" << std::endl;
  type = "Dog";
  this->list = new Brain();
} 

Dog::~Dog(){
	std::cout << "Dog Destructor called" << std::endl;
  delete this->list;
} 

Dog::Dog(const Dog &d){
	std::cout << "Dog Copy constructor called" << std::endl;
	 *this = d;
} 

Dog & Dog::operator =(const Dog &d){
	std::cout << "Dog Copy assignment operator called" << std::endl;
  delete this->list;
  this->list = new Brain();
  this->list->setIdeas(d.list->ideas);
	if(this != &d)
    this->type = d.type;
	return *this;
} 

void Dog::makeSound() const{
  std::cout << "Woof" << std::endl;
}
