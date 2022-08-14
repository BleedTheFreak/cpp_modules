#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
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

RobotomyRequestForm & RobotomyRequestForm::operator =(const RobotomyRequestForm &s){
	if(this != &s)
    this->target = s.target;
	return *this;
} 

RobotomyRequestForm::RobotomyRequestForm(std::string _target):Form("Robotomy request",72,45){
  target = _target;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
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
