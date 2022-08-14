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
private: 
  std::string target;
}; 

#endif // !SHRUBBERYCREATIONFORM_CLASS 