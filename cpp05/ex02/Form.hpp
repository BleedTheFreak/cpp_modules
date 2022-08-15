/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:22:22 by ytaya             #+#    #+#             */
/*   Updated: 2022/08/15 16:22:23 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS
#define FORM_CLASS

#include "Bureaucrat.hpp"
#include <iostream>

class Form
{
public:
	Form();
	Form(std::string,int,int);
	virtual ~Form();
	Form(const Form &f);
	Form & operator =(const Form &f);
  int getGardeExc() const;
  int getGardeSig() const;
  std::string getName() const;
  bool getSigned() const;
  void beSigned(const Bureaucrat &);
  virtual void  execute(Bureaucrat const & executor) const = 0;
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
  class FromNotSigned : public std::exception
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
