#include "FragTrap.hpp"

FragTrap::FragTrap(){
  std::cout << "FragTrap constructor called" << std::endl;
  setHitPoints(100);
  setEnergyPoints(50);
  setAttackDamage(30);
} 

FragTrap::FragTrap(std::string name):ClapTrap(name){
  std::cout << "FragTrap parameter constructor called" << std::endl;
  setHitPoints(100);
  setEnergyPoints(50);
  setAttackDamage(30);
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap Destructor called" << std::endl;
} 

FragTrap::FragTrap(const FragTrap &f){
	std::cout << "FragTrap Copy constructor called" << std::endl;
	 *this = f;
} 

FragTrap & FragTrap::operator =(const FragTrap &f){
  std::cout << "FragTrap Copy Assignment operator called" << std::endl;
  if (this != &f)
  {
    setName(f.getName());
    setHitPoints(f.getHitPoints());
    setEnergyPoints(f.getEnergyPoints());
    setAttackDamage(f.getAttackDamage());
  }
  return *this;
} 

void FragTrap::attack(const std::string &target){
  if (getEnergyPoints() > 0 && getHitPoints() > 0)
  {
    std::cout << "FragTrap " << getName() <<" attacks "<< target;
    takeDamege(getAttackDamage());
    setEnergyPoints(getEnergyPoints() - 1);
  }
  else if (getEnergyPoints() == 0)
    std::cout << "can't attack with 0 Energy Points" << std::endl;
  else
    std::cout << "can't attack with 0 Hit Points" << std::endl;
}

void FragTrap::takeDamege(unsigned int amount){
  if (getEnergyPoints() > 0 && getHitPoints() > 0)
    std::cout <<", causing "<< amount <<" points of damage!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
  if (getEnergyPoints() > 0 && getHitPoints() > 0)
  {
    setHitPoints(getHitPoints() + amount);
    std::cout << "FragTrap " << getName() <<" got "<< amount 
      <<" back to thier hit points" << std::endl;
    setEnergyPoints(getEnergyPoints() - 1);
  }
  else if (getEnergyPoints() == 0)
    std::cout << "can't be Repaired  with 0 Energy Points" << std::endl;
  else
    std::cout << "can't be Repaired  with 0  Hit Points" << std::endl;

}

void FragTrap::highFivesGuys(){
  std::cout << "Yo high five ✋" << std::endl;
}
