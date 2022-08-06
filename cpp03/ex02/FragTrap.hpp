#ifndef FRAGTRAP_CLASS
#define FRAGTRAP_CLASS

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	~FragTrap();
  FragTrap(std::string name);
	FragTrap(const FragTrap &f);
	FragTrap & operator =(const FragTrap &f);
  void attack(const std::string &target);
  void takeDamege(unsigned int amount);
  void beRepaired(unsigned int amount);
  void highFivesGuys();
private: 

}; 

#endif // !FRAGTRAP_CLASS 
