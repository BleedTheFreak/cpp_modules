#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(){
	std::cout << "Default constructor called" << std::endl;
} 

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "Destructor called" << std::endl;
} 

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &r){
	std::cout << "Copy constructor called" << std::endl;
	 *this = r;
} 

RobotomyRequestForm & RobotomyRequestForm::operator =(const RobotomyRequestForm &r){
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &r)
	{ 
	} 
	return *this;
} 

