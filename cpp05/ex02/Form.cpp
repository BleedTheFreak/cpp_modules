/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:22:20 by ytaya             #+#    #+#             */
/*   Updated: 2022/08/15 16:22:21 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string _name,int _gradeSig,int _gradeEx) : name(_name),gradeSig(_gradeSig),gradeExc(_gradeEx){
  if (_gradeEx < 1 || _gradeSig < 1)
    throw Form::GradeTooHighException();
  else if (_gradeEx > 150 || _gradeSig > 150)
    throw Form::GradeTooLowException();
  this->_signed = false;
}

Form::Form():name(),gradeSig(),gradeExc(){
} 

Form::~Form(){
} 

Form::Form(const Form &f):name(f.name),gradeSig(f.gradeSig),gradeExc(f.gradeExc){
	 *this = f;
} 

Form & Form::operator =(const Form &f){
	if(this != &f)
    this->_signed = f._signed;
	return *this;
} 

const char *Form::GradeTooHighException::what() const throw(){
  return "Grade Too High Exception";
}

const char *Form::GradeTooLowException::what() const throw(){
  return "Grade Too Low Exception";
}

const char *Form::FromNotSigned::what() const throw(){
  return "Form Not Signed Exception";
}

std::ostream & operator << (std::ostream &out , const Form &f){
  out << "Form name : " << f.getName() << " ,grade to sign " << f.getGardeSig() 
    << " ,grade to excute " << f.getGardeExc() << " , it's "  << ((f.getSigned())
    ? "signed" : "not signed");
  return out;
}

std::string Form::getName() const {
  return name;
}

bool Form::getSigned() const {
  return _signed;
}

int Form::getGardeExc() const {
  return gradeExc;
}

int Form::getGardeSig()  const {
  return gradeSig;
}

void Form::beSigned(const Bureaucrat &b){
  if (gradeSig >= b.getGarde())
  {
    _signed = true;
    b.signForm(*this);
  }
  else
    throw Form::GradeTooLowException();
}
