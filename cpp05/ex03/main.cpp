/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:23:27 by ytaya             #+#    #+#             */
/*   Updated: 2022/08/15 21:37:44 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
  Intern someRandomIntern;
  Form* rrf;
  rrf = someRandomIntern.makeForm("robotomy request", "Bender");
  // rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
  // rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
  std::cout << rrf->getName() << std::endl;
  delete rrf;
  // while (1);
  return 0;
}
