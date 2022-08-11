#include "AMateria.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include <cstdlib>

#define print(x) std::cout << x << std::endl;
int main (int argc, char *argv[])
{

// IMateriaSource* src = new MateriaSource();
//   src->learnMateria(new Ice());
//   src->learnMateria(new Cure());
//   ICharacter* me = new Character("me");
//   AMateria* tmp;
//   tmp = src->createMateria("ice");
//   me->equip(tmp);
//   tmp = src->createMateria("cure");
//   me->equip(tmp);
//   ICharacter* bob = new Character("bob");
//   me->use(0, *bob);
//   me->use(1, *bob);
//   delete bob;
//   delete me;
//   delete src;
  // =================================
  // Cure s;
  // Cure ss = s;
  // print(s.getType());
  // print(ss.getType());
  // =================================
  // AMateria *m = new Cure();
  // ICharacter  *cc = new Character("Yassine");
  // AMateria  *x = m->clone();
  // m->use(*cc);
  // std::cout << m->getType() << std::endl;
  // delete m;
  // x->use(*cc);
  // std::cout << x->getType() << std::endl;
  // delete cc;
  // =================================
  // Character c;
  // c.equip(new Ice());
  // c.equip(new Ice());
  // c.equip(new Ice());
  // c.equip(new Cure());
  // c.equip(new Ice());
  // Character b;
  // c = b;
  // =================================
  IMateriaSource* src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());
  ICharacter* me = new Character("me");
  AMateria* tmp;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);
  ICharacter* bob = new Character("bob");
  me->use(0, *bob);
  me->use(1, *bob);
  delete bob;
  delete me;
  delete src;
  // while (1);
  return 0;
}
