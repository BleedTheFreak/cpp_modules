#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main ()
{
  try {
    Bureaucrat b = Bureaucrat("Yassine");
    b.setGrade(30);
    // Form *f = new ShrubberyCreationForm("hello");
    Form *x = new PresidentialPardonForm("hello");
    // Form *c = new RobotomyRequestForm("hello");
    std::cout << *x << std::endl;
    // f->beSigned(b);
    // std::cout << *f << std::endl;
    // x->execute(b);
  }catch(Form::GradeTooLowException &e){
    std::cout << e.what()  << std::endl;
  }catch(Form::FromNotSigned &e){
    std::cout << e.what()  << std::endl;
  }

  return 0;
}
