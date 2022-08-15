/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:22:40 by ytaya             #+#    #+#             */
/*   Updated: 2022/08/15 16:22:41 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(){
} 

ShrubberyCreationForm::~ShrubberyCreationForm(){
} 

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s){
	 *this = s;
} 

ShrubberyCreationForm & ShrubberyCreationForm::operator =(const ShrubberyCreationForm &s){
	if(this != &s)
    this->target = s.target;
	return *this;
} 

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target):Form("Shrubbery creation",145,137){
  target = _target;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
  if (getSigned())
  {
    if (getGardeExc() >= executor.getGarde())
    {
      std::ofstream file;
      file.open(target + "_shrubbery");
      if (file.is_open())
      {
        file << "                      ,@@@@@@@," << std::endl;
        file << "        ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
        file << "     ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
        file << "    ,%&\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
        file << "    %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
        file << "    %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
        file << "    `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
        file << "        |o|        | |         | |" << std::endl;
        file << "        |.|        | |         | |" << std::endl;
        file << "     _\\/ ._\\//_/__/  ,\\_//__\\ /.  \\_//__/_" << std::endl;
      }
      file.close();
    }
    else
      throw Form::GradeTooLowException();
  }
  else
      throw Form::FromNotSigned();
}
