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

PresidentialPardonForm::PresidentialPardonForm(std::string _target):Form("Pardon Form",72,45){
  target = _target;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
  if (getSigned())
  {
    if (getGardeExc() >= executor.getGarde())
    {
      std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
      executor.executeForm(*this);
    }
    else
      throw Form::GradeTooLowException();
  }
  else
      throw Form::FromNotSigned();
}
