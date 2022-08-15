/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:22:26 by ytaya             #+#    #+#             */
/*   Updated: 2022/08/15 16:24:06 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main ()
{
  try {
    Bureaucrat b = Bureaucrat("Yassine");
    b.setGrade(1);
    // Form *x = new PresidentialPardonForm("hello");
    Form *x = new RobotomyRequestForm("hello");
    // Form *x = new ShrubberyCreationForm("hello");
    x->beSigned(b);
    b.executeForm(*x);
  }catch(Form::FromNotSigned &e){
    std::cout << e.what()  << std::endl;
  }

  return 0;
}
