#ifndef DOG_CLASS
#define DOG_CLASS

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal
{
public:
	Dog();
	~Dog();
	Dog(const Dog &d);
	Dog & operator =(const Dog &d);
  void makeSound() const;
private: 
  Brain *list;
}; 

#endif // !DOG_CLASS 
