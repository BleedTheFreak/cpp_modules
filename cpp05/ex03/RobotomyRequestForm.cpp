/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:22:35 by ytaya             #+#    #+#             */
/*   Updated: 2022/08/15 18:27:26 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
      srand(time(NULL));
      if ((rand()  % 100) % 2 == 0)
      {
        std::cout << "fzzzzzzzzzzz" << std::endl;
        std::cout << target << " hase been robotomized successfully 50% of the time" << std::endl;
      }
      else
        std::cout << "the robotomized failed" << std::endl;
    }
    else
      throw Form::GradeTooLowException();
  }
  else
      throw Form::FromNotSigned();
}

std::string RobotomyRequestForm::getTarget() const {
  return target;
}