/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:23:25 by ytaya             #+#    #+#             */
/*   Updated: 2022/08/15 18:14:40 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CLASS
#define INTERN_CLASS

#include <iostream>
#include "Form.hpp"

class Intern
{
public:
	Intern();
	~Intern();
	Intern(const Intern &i);
	Intern & operator =(const Intern &i);
  Form * makeForm(std::string,std::string);
private: 
}; 

#endif // !INTERN_CLASS 
