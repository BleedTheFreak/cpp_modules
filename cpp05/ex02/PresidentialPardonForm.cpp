/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:22:31 by ytaya             #+#    #+#             */
/*   Updated: 2022/08/15 16:22:32 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

PresidentialPardonForm::PresidentialPardonForm(std::string _target):Form("Presidential pardon",25,5){
  target = _target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
  if (getSigned())
  {
    if (getGardeExc() >= executor.getGarde())
      std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    else
      throw Form::GradeTooLowException();
  }
  else
      throw Form::FromNotSigned();
}
