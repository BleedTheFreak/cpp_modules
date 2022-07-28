
#include "HumanA.hpp"

void HumanA::attack(){
  std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon ) : weapon(weapon){
  this->name = name;
  std::cout << "HumanA Constracter Parameter called" << std::endl;
}

HumanA::~HumanA(){
  std::cout << "HumanA Distractor called" << std::endl;
}
