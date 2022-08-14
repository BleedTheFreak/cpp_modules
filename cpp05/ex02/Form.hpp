#ifndef FORM_CLASS
#define FORM_CLASS

#include "Bureaucrat.hpp"
#include <iostream>

class Form
{
public:
	Form();
	Form(std::string,int,int);
	~Form();
	Form(const Form &f);
	Form & operator =(const Form &f);
  int getGardeExc() const;
  int getGardeSig() const;
  std::string getName() const;
  bool getSigned() const;
  void beSigned(const Bureaucrat &);
  class GradeTooHighException : public std::exception
  {
    public:
        const char * what() const throw();
  };
  class GradeTooLowException : public std::exception
  {
    public:
        const char * what() const throw();
  };
private: 
  const std::string name;
  const int gradeSig;
  const int gradeExc;
  bool _signed;
}; 

std::ostream & operator << (std::ostream &out , const Form &f);

#endif // !FORM_CLASS 
