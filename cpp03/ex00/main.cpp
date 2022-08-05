#include "ClapTrap.hpp"
#include "ClapTrap.hpp"
#include "ClapTrap.hpp"

int main ()
{  
  ClapTrap clap = ClapTrap("Yassine");
  std::cout << "Energy points = " << clap.getEnergyPoints() << std::endl;
  clap.attack("Ahmed");
  std::cout << "Energy points = " << clap.getEnergyPoints() << std::endl;
  clap.setEnergyPoints(0);
  std::cout << "Energy points = " << clap.getEnergyPoints() << std::endl;
  clap.attack("Ahmed");
  std::cout << "Energy points = " << clap.getEnergyPoints() << std::endl;
  std::cout << "================================================" << std::endl;
  std::cout << "Hit points = " << clap.getHitPoints() << std::endl;
  std::cout << "Energy points = " << clap.getEnergyPoints() << std::endl;
  clap.setHitPoints(0);
  clap.setEnergyPoints(10);
  std::cout << "Hit points = " << clap.getHitPoints() << std::endl;
  std::cout << "Energy points = " << clap.getEnergyPoints() << std::endl;
  clap.attack("Ahmed");
  clap.setHitPoints(1);
  clap.beRepaired(100);
  std::cout << "Hit points = " << clap.getHitPoints() << std::endl;
  std::cout << "Energy points = " << clap.getEnergyPoints() << std::endl;
  return 0;
}
