#include "AMateria.hpp"
#include "ICharacter.hpp"

std::string const & AMateria::getType() const{
  return type;
}

AMateria::AMateria(std::string const & _type)
{
  this->type = _type;
}

AMateria::AMateria():type("unknown")
{
  // it's abstract class :'(
}

AMateria::AMateria(const AMateria &a)
{
  // it's abstract class :'(
}

AMateria & AMateria::operator=(const AMateria &a){
  // it's abstract class :'(
  return *this;
}

AMateria::~AMateria(){
  // it's abstract class :'(
}

void AMateria::use(ICharacter &target){
}
