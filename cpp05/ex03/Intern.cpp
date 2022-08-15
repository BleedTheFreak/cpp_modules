/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:23:22 by ytaya             #+#    #+#             */
/*   Updated: 2022/08/15 18:44:12 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){
} 

Intern::~Intern(){
} 

Intern::Intern(const Intern &i){
	 *this = i;
} 

Intern & Intern::operator =(const Intern &x){
	if(this != &x)
	{
    // nothing to copy
	}
	return *this;
} 

Form * Intern::makeForm(std::string formName, std::string target){
  int ret = -1;

  Form *InternForms[3];
  InternForms[0] = new ShrubberyCreationForm(target);
  InternForms[1] = new RobotomyRequestForm(target);
  InternForms[2] = new PresidentialPardonForm(target);
  for (int i = 0;i < 3;i++)
  {
    if (formName == InternForms[i]->getName())
      ret = i;
    else 
      delete InternForms[i];
  }
  if (ret != -1)
  {
    std::cout << "Inter creates " << formName << std::endl;
    return InternForms[ret];
  }
  else
    std::cout << "Can't make this unkown name : " << formName << std::endl;
  exit(1);
}
