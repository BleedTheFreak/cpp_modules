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
  std::cout << rrf->getName() << std::endl;
  // rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
  // rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
  while (1);
  return 0;
}
