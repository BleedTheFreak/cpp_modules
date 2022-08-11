#ifndef CHARACTER_CLASS
#define CHARACTER_CLASS

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

class Character : public ICharacter
{
public:
	Character();
	Character(std::string _name);
	~Character();
	Character(const Character &c);
	Character & operator =(const Character &c);
  std::string const & getName() const;
  void equip(AMateria* m);
  void unequip(int idx);
  void use(int idx, ICharacter& target);
private: 
  std::string name;
  AMateria *slot[4];
  int length;
}; 

#endif // !CHARACTER_CLASS 
