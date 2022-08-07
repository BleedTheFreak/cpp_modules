#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
  std::cout << "ScavTrap constructor called" << std::endl;
  setHitPoints(100);
  setEnergyPoints(50);
  setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name){
  std::cout << "ScavTrap parameter constructor called" << std::endl;
  setHitPoints(100);
  setEnergyPoints(50);
  setAttackDamage(20);
}

ScavTrap::~ScavTrap(){
  std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav){ 
  std::cout << "ScavTra Cpopy constructor called" << std::endl;
  *this = scav;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &scav){
  std::cout << "ScavTra Copy Assignment operator called" << std::endl;
  if (this != &scav)
  {
    setName(scav.getName());
    setHitPoints(scav.getHitPoints());
    setEnergyPoints(scav.getEnergyPoints());
    setAttackDamage(scav.getAttackDamage());
  }
  return *this;
}

void ScavTrap::guardGate(){
  std::cout << "ScavTrap " << getName() <<" is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target){
  if (getEnergyPoints() > 0 && getHitPoints() > 0)
  {
    std::cout << "ScavTrap " << getName() <<" attacks "<< target;
    takeDamege(getAttackDamage());
    setEnergyPoints(getEnergyPoints() - 1);
  }
  else if (getEnergyPoints() == 0)
    std::cout << "can't attack with 0 Energy Points" << std::endl;
  else
    std::cout << "can't attack with 0 Hit Points" << std::endl;
}

void ScavTrap::takeDamege(unsigned int amount){
  if (getEnergyPoints() > 0 && getHitPoints() > 0)
    std::cout <<", causing "<< amount <<" points of damage!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
  if (getEnergyPoints() > 0 && getHitPoints() > 0)
  {
    setHitPoints(getHitPoints() + amount);
    std::cout << "ScavTrap " << getName() <<" got "<< amount 
      <<" back to thier hit points" << std::endl;
    setEnergyPoints(getEnergyPoints() - 1);
  }
  else if (getEnergyPoints() == 0)
    std::cout << "can't be Repaired  with 0 Energy Points" << std::endl;
  else
    std::cout << "can't be Repaired  with 0  Hit Points" << std::endl;

}
