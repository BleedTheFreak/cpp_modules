#include "Dog.hpp"

Dog::Dog(){
  type = "Dog";
	std::cout << "Dog Default constructor called" << std::endl;
} 

Dog::~Dog(){
	std::cout << "Dog Destructor called" << std::endl;
} 

Dog::Dog(const Dog &d){
	std::cout << "Dog Copy constructor called" << std::endl;
	 *this = d;
} 

Dog & Dog::operator =(const Dog &d){
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if(this != &d)
    this->type = d.type;
	return *this;
} 

void Dog::makeSound() const{
  std::cout << "Woof" << std::endl;
}
