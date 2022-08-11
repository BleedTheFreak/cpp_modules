#ifndef BRAIN_CLASS
#define BRAIN_CLASS

#include <iostream>

class Brain
{
public:
	Brain();
	~Brain();
	Brain(const Brain &b);
	Brain & operator =(const Brain &b);
  std::string ideas[100];
  void setIdeas(std::string *list);
private: 

}; 

#endif // !BRAIN_CLASS 
