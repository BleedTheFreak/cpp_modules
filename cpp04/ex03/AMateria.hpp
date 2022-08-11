#ifndef AMATERIA_CLASS
#define AMATERIA_CLASS

#include <iostream>
// #include "ICharacter.hpp"
class ICharacter;

class AMateria
{
  protected:
    std::string type;
  public:
    AMateria(std::string const & type);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    virtual ~AMateria();
    AMateria();
  private:
    AMateria(const AMateria &a);
    AMateria & operator=(const AMateria &a);
};

#endif //ICHAEACTER_INERFACE
