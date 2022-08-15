/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:21:58 by ytaya             #+#    #+#             */
/*   Updated: 2022/08/15 16:21:59 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS
#define BUREAUCRAT_CLASS

#include <exception>
#include <iostream>
class Form;

class Bureaucrat
{
public:
	Bureaucrat();
  Bureaucrat(std::string _name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &b);
	Bureaucrat & operator =(const Bureaucrat &b);
  int getGarde() const;
  std::string getName() const;
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
