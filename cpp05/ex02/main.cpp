#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main ()
{
  try {
    Bureaucrat b = Bureaucrat("Yassine");
    b.setGrade(30);
    Form *f = new ShrubberyCreationForm("hello");
    f->beSigned(b);
    std::cout << *f << std::endl;
    f->execute(b);
  }catch(Form::GradeTooLowException &e){
    std::cout << e.what()  << std::endl;
  }catch(Form::FromNotSigned &e){
    std::cout << e.what()  << std::endl;
  }

  return 0;
}
