#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){
  InternForms[0] = new ShrubberyCreationForm("shrubbery creation");
  InternForms[1] = new RobotomyRequestForm("robotomy request");
  InternForms[2] = new PresidentialPardonForm("presidential pardon");
} 

Intern::~Intern(){
  for (int i = 0 ;i < 3 ;i++)
    delete InternForms[i];
} 

Intern::Intern(const Intern &i){
	 *this = i;
} 

Intern & Intern::operator =(const Intern &x){
	if(this != &x)
	{
    for (int i = 0 ;i < 3 ;i++)
    {
      delete this->InternForms[i];
      this->InternForms[i] = x.InternForms[i]->getCopy(x.InternForms[i]->getTarget());
    }
	}
	return *this;
} 

Form * Intern::makeForm(std::string formName, std::string target){
  for (int i = 0;i < 3;i++)
  {
    if (formName == InternForms[i]->getName())
    {
      std::cout << "Inter creates " << formName << std::endl;
      return InternForms[i]->getCopy(target);
    }
  }
  std::cout << "can't make this " << formName << std::endl;
  return nullptr;
}
