/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:22:42 by ytaya             #+#    #+#             */
/*   Updated: 2022/08/15 18:21:14 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_CLASS
#define SHRUBBERYCREATIONFORM_CLASS

#include "Form.hpp"
#include <iostream>

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &s);
	ShrubberyCreationForm & operator =(const ShrubberyCreationForm &s);
  	void execute(Bureaucrat const & executor) const;
	ShrubberyCreationForm(std::string target);
	std::string getTarget() const;
private: 
  std::string target;
}; 

#endif // !SHRUBBERYCREATIONFORM_CLASS 
