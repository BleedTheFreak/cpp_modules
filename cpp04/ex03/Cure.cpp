#include "Cure.hpp"

Cure::Cure():AMateria("cure"){
	// std::cout << "Cure Default constructor called" << std::endl;
} 

Cure * Cure::clone() const {
  Cure *ret = new Cure;
  return ret;
}

void Cure::use(ICharacter &target){
    std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}

Cure::~Cure(){
	// std::cout << "Cure Destructor called" << std::endl;
} 

Cure::Cure(const Cure &c){
	// std::cout << "Cure Copy constructor called" << std::endl;
	 *this = c;
} 

Cure & Cure::operator =(const Cure &c){
	// std::cout << "Cure Copy assignment operator called" << std::endl;
	if(this != &c)
    this->type = c.type;
	return *this;
} 

