/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:22:38 by ytaya             #+#    #+#             */
/*   Updated: 2022/08/15 18:21:17 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_CLASS
#define ROBOTOMYREQUESTFORM_CLASS

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &r);
	RobotomyRequestForm & operator =(const RobotomyRequestForm &r);
  	void execute(Bureaucrat const & executor) const;
	RobotomyRequestForm(std::string target);
	std::string getTarget() const;
private: 
  std::string target;
}; 

#endif // !ROBOTOMYREQUESTFORM_CLASS 
