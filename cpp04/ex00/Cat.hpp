#ifndef CAT_CLASS
#define CAT_CLASS

#include "Animal.hpp"
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

}; 

#endif // !CAT_CLASS 
