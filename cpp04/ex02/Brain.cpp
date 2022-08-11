#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain Default constructor called" << std::endl;
} 

Brain::~Brain(){
	std::cout << "Brain Destructor called" << std::endl;
} 

Brain::Brain(const Brain &b){
	std::cout << "Brain Copy constructor called" << std::endl;
	 *this = b;
} 

Brain & Brain::operator =(const Brain &b){
	std::cout << "Brain Copy assignment operator called" << std::endl;
	if(this != &b)
	{ 
    for (int i = 0; i < 100 ; i++)
      this->ideas[i] = b.ideas[i];
	} 
	return *this;
} 

void Brain::setIdeas(std::string *list){
  for (int i = 0; i < 100; i++) {
    if (!list[i].empty())
      this->ideas[i] = list[i];
  }
}
