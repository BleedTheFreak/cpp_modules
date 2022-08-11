#include "Ice.hpp"

Ice::Ice():AMateria("ice"){
	// std::cout << "Ice Default constructor called" << std::endl;
} 

Ice * Ice::clone() const {
  Ice *ret = new Ice;
  return ret;
}

void Ice::use(ICharacter &target){
  std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice(){
	// std::cout << "Ice Destructor called" << std::endl;
} 

Ice::Ice(const Ice &c){
	// std::cout << "Ice Copy constructor called" << std::endl;
	 *this = c;
} 

Ice & Ice::operator =(const Ice &c){
	// std::cout << "Ice Copy assignment operator called" << std::endl;
	if(this != &c)
    this->type = c.type;
	return *this;
} 


