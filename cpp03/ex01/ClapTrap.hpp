#ifndef CLAPTRAP_CLASS
#define CLAPTRAP_CLASS

#include <iostream>

class ClapTrap
{
public:
  ClapTrap();
  ClapTrap(const std::string name);
  ~ClapTrap();
  ClapTrap(const ClapTrap &clap);
  ClapTrap & operator =(const ClapTrap &clap);
  void attack(const std::string &target);
  void takeDamege(unsigned int amount);
  void beRepaired(unsigned int amount);
  int getHitPoints() const;
  int getEnergyPoints() const;
  int getAttackDamage() const;
  void setHitPoints(unsigned int amount);
  void setEnergyPoints(unsigned int amount);
  void setAttackDamage(unsigned int amount);
  void setName(std::string name);
  std::string getName() const;

private:
    std::string name;
    unsigned int HitPoints;
    unsigned int EnergyPoints;
    unsigned int AttackDamage;
};

#endif // !CLAPTRAP_CLASS
