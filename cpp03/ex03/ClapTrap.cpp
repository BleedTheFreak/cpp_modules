#include "ClapTrap.hpp"

ClapTrap::ClapTrap():HitPoints(10),EnergyPoints(10),AttackDamage(0){
  std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):HitPoints(10),EnergyPoints(10),AttackDamage(0){
  std::cout << "ClapTrap Paremeter constructor called" << std::endl;
  this->name = name;
}

ClapTrap::~ClapTrap(){
  std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
  std::cout << "ClapTrap Copy constructor called" << std::endl;
  *this = clap;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &clap){
  std::cout << "ClapTrap Copy Assignment operator called" << std::endl;
  if (this != &clap)
  {
    this->name = clap.name;
    this->HitPoints = clap.HitPoints;
    this->EnergyPoints = clap.EnergyPoints;
    this->AttackDamage = clap.AttackDamage;
  }
  return *this;
}

void ClapTrap::attack(const std::string &target){
  if (EnergyPoints > 0 && HitPoints > 0)
  {
    std::cout << "ClapTrap " << name <<" attacks "<< target;
    takeDamege(AttackDamage);
    EnergyPoints--;
  }
  else if (EnergyPoints == 0)
    std::cout << "can't  attack with 0 Energy Points" << std::endl;
  else
    std::cout << "can't  attack with 0 Hit Points" << std::endl;

}

void ClapTrap::takeDamege(unsigned int amount){
  if (EnergyPoints > 0 && HitPoints > 0)
    std::cout <<", causing "<< amount <<" points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (EnergyPoints > 0 && HitPoints > 0)
  {
    HitPoints = HitPoints + amount;
    std::cout << "ClapTrap " << name <<" got "<< amount 
      <<" back to thier hit points" << std::endl;
    EnergyPoints--;
  }
  else if (EnergyPoints == 0)
    std::cout << "can't be Repaired  with 0 Energy Points" << std::endl;
  else
    std::cout << "can't be Repaired  with 0  Hit Points" << std::endl;

}

int ClapTrap::getHitPoints() const {
  return HitPoints;
}

int ClapTrap::getEnergyPoints() const {
  return EnergyPoints;
}

int ClapTrap::getAttackDamage() const {
  return AttackDamage;
}

void ClapTrap::setHitPoints(unsigned int amount){
  HitPoints = amount;
}

void ClapTrap::setEnergyPoints(unsigned int amount){
  EnergyPoints = amount;
}

void ClapTrap::setAttackDamage(unsigned int amount){
  AttackDamage = amount;
}


std::string ClapTrap::getName() const{
  return name;
}

void ClapTrap::setName(std::string _name){
 this->name = _name;
}
