#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal Default constructor called" << std::endl;
} 

Animal::~Animal(){
	std::cout << "Animal Destructor called" << std::endl;
} 

Animal::Animal(const Animal &a){
	std::cout << "Animal Copy constructor called" << std::endl;
	 *this = a;
} 

Animal & Animal::operator =(const Animal &a){
	std::cout << "Animal Copy assignment operator called" << std::endl;
	if(this != &a)
    this->type = a.type;
	return *this;
} 

// void Animal::makeSound() const{
//   std::cout << "Animallllllll" << std::endl;
// }

std::string Animal::getType() const {
  return this->type;
}
