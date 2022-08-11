#ifndef MATERIASOURCE_CLASS
#define MATERIASOURCE_CLASS

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource &m);
	MateriaSource &operator=(const MateriaSource &m);
	void learnMateria(AMateria *);
	AMateria *createMateria(std::string const &type);

private:
    int length;
    AMateria *slot[4];
};

#endif // !MATERIASOURCE_CLASS
