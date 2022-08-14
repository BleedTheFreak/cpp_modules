#ifndef BUREAUCRAT_CLASS
#define BUREAUCRAT_CLASS

#include <exception>
#include <iostream>
class Form;

class Bureaucrat
{
public:
	Bureaucrat();
  Bureaucrat(std::string);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &b);
	Bureaucrat & operator =(const Bureaucrat &b);
  int getGarde() const;
  std::string getName() const;
  void setGrade(int _grade);
  void increment();
  void decrement();
  void signForm(const Form &) const;
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
  int grade;
}; 

std::ostream & operator<<(std::ostream &out , const Bureaucrat &b);

#endif // !BUREAUCRAT_CLASS 
