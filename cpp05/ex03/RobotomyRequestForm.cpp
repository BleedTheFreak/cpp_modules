#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

RobotomyRequestForm::RobotomyRequestForm(){
} 

RobotomyRequestForm::~RobotomyRequestForm(){
} 

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &r){
	 *this = r;
} 

RobotomyRequestForm & RobotomyRequestForm::operator =(const RobotomyRequestForm &s){
	if(this != &s)
    this->target = s.target;
	return *this;
} 

RobotomyRequestForm::RobotomyRequestForm(std::string _target):Form("robotomy request",72,45){
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

Form *RobotomyRequestForm::getCopy(std::string target)
{
  return new RobotomyRequestForm(target);
}


std::string RobotomyRequestForm::getTarget() const {
  return target;
}
