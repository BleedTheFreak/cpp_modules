// #include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main ()
{  
  DiamondTrap D = DiamondTrap("ansss");
  D.whoAmI();
  D.attack("hello");
  D.ClapTrap::attack("hello");
  return 0;
}
