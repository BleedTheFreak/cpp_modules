#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
  try {
    Bureaucrat b = Bureaucrat("Yassine");
    b.setGrade(30);
    std::cout << b << std::endl;
    Form f = Form("3a9d zwaj",20,50);
    std::cout << f << std::endl;
    f.beSigned(b);
    std::cout << f << std::endl;
  }catch(Form::GradeTooHighException &e){
    std::cout << e.what() << std::endl;
  }catch(Form::GradeTooLowException &e){
    std::cout << e.what() << std::endl;
  }

  return 0;
}
