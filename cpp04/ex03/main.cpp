#include "AMateria.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Character.hpp"

int main ()
{
  // =================================
  // ICharacter *c = new  Character("name");
  // c->equip(new Ice());
  // c->equip(new Ice());
  // c->equip(new Ice());
  // c->equip(new Cure());
  // c->equip(new Ice());
  // ICharacter *b;
  // // delete b;
  // b = new Character();
  // *b = *c;
  // delete c;
  // delete b;
  // =================================
  // IMateriaSource* src = new MateriaSource();
  // src->learnMateria(new Ice());
  // src->learnMateria(new Cure());
  // ICharacter* me = new Character("me");
  // AMateria* tmp;
  // tmp = src->createMateria("ice");
  // me->equip(tmp);
  // tmp = src->createMateria("cure");
  // me->equip(tmp);
  // ICharacter* bob = new Character("bob");
  // me->use(0, *bob);
  // me->use(1, *bob);
  // delete bob;
  // delete me;
  // delete src;
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
  IMateriaSource* src1 = new MateriaSource();
  *src1 = *src;
  delete bob;
  delete me;
  delete src;
  delete src1;
  // while (1);
  return 0;
}
