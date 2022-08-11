#ifndef CAT_CLASS
#define CAT_CLASS

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal
{
public:
	Cat();
	~Cat();
	Cat(const Cat &c);
	Cat & operator =(const Cat &c);
  void makeSound() const;
private: 
    Brain *list;

}; 

#endif // !CAT_CLASS 
