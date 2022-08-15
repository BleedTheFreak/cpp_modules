/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:22:33 by ytaya             #+#    #+#             */
/*   Updated: 2022/08/15 16:22:34 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_CLASS
#define PRESIDENTIALPARDONFORM_CLASS

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm();
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &p);
	PresidentialPardonForm & operator =(const PresidentialPardonForm &p);
  void execute(Bureaucrat const & executor) const;
	PresidentialPardonForm(std::string target);
private: 
  std::string target;
}; 

#endif // !PRESIDENTIALPARDONFORM_CLASS 
