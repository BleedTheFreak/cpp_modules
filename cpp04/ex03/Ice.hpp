#ifndef ICE_CLASS
#define ICE_CLASS

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Ice : public AMateria
{
public:
	Ice();
	~Ice();
	Ice(const Ice &c);
	Ice & operator =(const Ice &c);
  Ice* clone() const;
  void use(ICharacter& target);
private: 

};

#endif // !ICE_CLASS 
