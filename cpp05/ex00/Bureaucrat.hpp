#ifndef BUREAUCRAT_CLASS
#define BUREAUCRAT_CLASS

#include <exception>
#include <iostream>

class Bureaucrat
{
public:
	Bureaucrat();
  Bureaucrat(std::string _name);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &b);
	Bureaucrat & operator =(const Bureaucrat &b);
  int getGarde() const;
  std::string getName() const;
  void setGrade(int _grade);
  void increment();
  void decrement();
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
  std::string name;
  int grade;
}; 

std::ostream & operator<<(std::ostream &out , const Bureaucrat &b);

#endif // !BUREAUCRAT_CLASS 
