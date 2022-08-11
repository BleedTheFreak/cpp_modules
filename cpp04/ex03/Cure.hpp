#ifndef CURE_CLASS
#define CURE_CLASS

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Cure : public AMateria
{
public:
	Cure();
	~Cure();
	Cure(const Cure &c);
	Cure & operator =(const Cure &c);
  Cure* clone() const;
  void use(ICharacter& target);
private: 

};

#endif // !CURE_CLASS 
