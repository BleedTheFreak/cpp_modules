#ifndef ANIMAL_CLASS
#define ANIMAL_CLASS

#include <iostream>

class Animal
{
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal &a);
	Animal & operator =(const Animal &a);
  virtual void makeSound() const = 0;
  std::string getType() const;
protected:
    std::string type;
}; 

#endif // !ANIMAL_CLASS 
