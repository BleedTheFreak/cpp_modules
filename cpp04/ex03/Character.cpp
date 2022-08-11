#include "Character.hpp"

Character::Character():length(0){
	// std::cout << "Character default constructor called" << std::endl;
  int i = 0;
  while (i < 4)
    this->slot[i++] = nullptr;
} 

Character::~Character(){
	// std::cout << "Character Destructor called" << std::endl;
  for (int i = 0; i < length; i++)
    delete this->slot[i];
} 

Character::Character(const Character &c){
	// std::cout << "Character Copy constructor called" << std::endl;
	 *this = c;
} 

Character & Character::operator =(const Character &c){
	// std::cout << "Character Copy assignment operator called" << std::endl;
	if(this != &c)
	{ 
    int i = 0;
    while (i < length) {
       // prevent leaks in assignment a = b both a and b exits
      delete this->slot[i];
      this->slot[i] = nullptr;
      if (c.slot[i] != nullptr)
        this->slot[i] = c.slot[i]->clone(); 
      else
        this->slot[i] = nullptr;
      i++;
    }
	} 
	return *this;
} 

std::string const & Character::getName() const {
  return this->name;
}

void Character::equip(AMateria *m){
  if (length >= 0 && length < 4){
    int i  = 0;
    while (i <= length) {
      if (this->slot[i] == nullptr)
      {
        this->slot[i] = m;
        length++;
        break;
      }
      i++;
    }
  }
}

void Character::unequip(int idx)
{
  if (idx < 4 && idx >= 0 && this->slot[idx] != nullptr)
   this->slot[idx] = nullptr; 
}

void Character::use(int idx, ICharacter &target)
{
  if (idx < 4 && idx >= 0)
    slot[idx]->use(target); 
}

Character::Character(std::string _name):length(0){
  name = _name;
  int i = 0;
  while (i < 4)
    this->slot[i++] = nullptr;
}
