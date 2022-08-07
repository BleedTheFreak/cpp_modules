#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	std::cout << "DiamondTrap Default constructor called" << std::endl;
} 

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name"),name(name){
  // this->name = name;
	std::cout << "DiamondTrap Parameter constructor called" << std::endl;
  setHitPoints(FragTrap::getHitPoints());
  setEnergyPoints(ScavTrap::getEnergyPoints());
  setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap Destructor called" << std::endl;
} 

DiamondTrap::DiamondTrap(const DiamondTrap &d){
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	 *this = d;
} 

DiamondTrap & DiamondTrap::operator =(const DiamondTrap &d){
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	if(this != &d)
	{ 
    setName(d.getName());
    setHitPoints(d.getHitPoints());
    setEnergyPoints(d.getEnergyPoints());
    setAttackDamage(d.getAttackDamage());
	} 
	return *this;
} 

void  DiamondTrap::whoAmI(){
  std::cout << "I'm " << name << " or " << getName() << " whoAmI ? 🤔" << std::endl;
}
