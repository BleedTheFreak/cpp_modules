#ifndef DIAMODTRAP_CLASS
#define DIAMODTRAP_CLASS

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class DiamondTrap: public ScavTrap, public FragTrap
{
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	~DiamondTrap();
	DiamondTrap(const DiamondTrap &d);
	DiamondTrap & operator =(const DiamondTrap &d);
  void whoAmI();
  using ScavTrap::attack; 
private: 
  std::string name;
}; 

#endif // !DIAMODTRAP_CLASS 
