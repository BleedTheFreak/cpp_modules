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
  Form *InternForms[3];
}; 

#endif // !INTERN_CLASS 
