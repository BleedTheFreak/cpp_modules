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
  std::string getTarget() const;
private: 
  std::string target;
  Form *getCopy(std::string target);
}; 

#endif // !PRESIDENTIALPARDONFORM_CLASS 
