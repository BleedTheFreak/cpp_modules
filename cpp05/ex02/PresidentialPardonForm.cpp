#include "PresidentialPardonForm.hpp"
#include <fstream>
PresidentialPardonForm::PresidentialPardonForm(){
	std::cout << "Default constructor called" << std::endl;
} 

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "Destructor called" << std::endl;
} 

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p){
	std::cout << "Copy constructor called" << std::endl;
	 *this = p;
} 

PresidentialPardonForm & PresidentialPardonForm::operator =(const PresidentialPardonForm &s){
	if(this != &s)
    this->target = s.target;
	return *this;
} 

PresidentialPardonForm::PresidentialPardonForm(std::string _target):Form("Presidential pardon",25,5){
  target = _target;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
  if (getSigned())
  {
    if (getGardeExc() >= executor.getGarde())
    {
      std::cout << "fzzzzzzzzzzz" << std::endl;
      std::cout << target << " hase been robotomized successfully 50% if the time" << std::endl;
      executor.executeForm(*this);
    }
    else
    {
      std::cout << "the robotomized failed" << std::endl;
      throw Form::GradeTooLowException();
    }
  }
  else
      throw Form::FromNotSigned();
}
