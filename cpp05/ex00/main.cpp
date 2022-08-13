#include "Bureaucrat.hpp"

int main ()
{
  try{
    Bureaucrat b = Bureaucrat("Yassine");
    b.setGrade(1);
    // b.setGrade(150);
    // b.setGrade(0);
    // b.setGrade(151);
    std::cout << b << std::endl;
    // b.increment();
    b.decrement();
    std::cout << b << std::endl;
  }catch (Bureaucrat::GradeTooHighException &e){
    std::cout << e.what() << std::endl;
  }catch (Bureaucrat::GradeTooLowException &e){
    std::cout << e.what() << std::endl;
  }
  return 0;
}
