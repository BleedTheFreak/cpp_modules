#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm(){
} 

PresidentialPardonForm::~PresidentialPardonForm(){
} 

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p){
	 *this = p;
} 

PresidentialPardonForm & PresidentialPardonForm::operator =(const PresidentialPardonForm &s){
	if(this != &s)
    this->target = s.target;
	return *this;
} 

PresidentialPardonForm::PresidentialPardonForm(std::string _target):Form("presidential pardon",25,5){
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

Form * PresidentialPardonForm::getCopy(std::string target){
  return new PresidentialPardonForm(target);
}

std::string PresidentialPardonForm::getTarget() const {
  return target;
}
