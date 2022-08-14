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
  Form *getCopy(std::string target);
}; 

#endif // !ROBOTOMYREQUESTFORM_CLASS 
