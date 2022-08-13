#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
	std::cout << "Default constructor called" << std::endl;
} 

Bureaucrat::Bureaucrat(std::string _name):name(_name){
	std::cout << "Parameter constructor called" << std::endl;
} 

Bureaucrat::~Bureaucrat(){
	std::cout << "Destructor called" << std::endl;
} 

Bureaucrat::Bureaucrat(const Bureaucrat &b):name(b.name){
	std::cout << "Copy constructor called" << std::endl;
	 *this = b;
}

Bureaucrat & Bureaucrat::operator =(const Bureaucrat &b){
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &b)
    this->grade = b.grade;
	return *this;
}

int Bureaucrat::getGarde() const{
  return grade;
}

std::string Bureaucrat::getName() const{
  return name;
}

void Bureaucrat::setGrade(int _grade){
  if (_grade < 1)
    throw Bureaucrat::GradeTooHighException();
  else if (_grade > 150)
    throw Bureaucrat::GradeTooLowException();
  this->grade = _grade;
}

void Bureaucrat::increment(){
  if (grade - 1 < 1)
    throw Bureaucrat::GradeTooHighException();
  grade--;
}

void Bureaucrat::decrement(){
  if (grade + 1 > 150)
    throw Bureaucrat::GradeTooLowException(); 
  grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
  return "Grade Too High Exception";
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
  return "Grade Too Low Exception";
}

std::ostream & operator<<(std::ostream &out , const Bureaucrat &b)
{
  out << b.getName() << ", bureaucrat grade " << b.getGarde();
  return out;
}
