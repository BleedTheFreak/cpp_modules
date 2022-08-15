/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:21:42 by ytaya             #+#    #+#             */
/*   Updated: 2022/08/15 21:29:19 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
} 

Bureaucrat::Bureaucrat(std::string _name , int _grade):name(_name),grade(_grade){
    if (_grade < 1)
    throw Bureaucrat::GradeTooHighException();
  else if (_grade > 150)
    throw Bureaucrat::GradeTooLowException();
} 

Bureaucrat::~Bureaucrat(){
} 

Bureaucrat::Bureaucrat(const Bureaucrat &b):name(b.name){
	 *this = b;
}

Bureaucrat & Bureaucrat::operator =(const Bureaucrat &b){
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
