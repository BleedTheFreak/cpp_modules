#include "MateriaSource.hpp"

MateriaSource::MateriaSource():length(0){
	// std::cout << "MateriaSource Default constructor called" << std::endl;
  int i = 0;
  while (i < 4)
    this->slot[i++] = nullptr;
} 

MateriaSource::~MateriaSource(){
	// std::cout << "MateriaSource Destructor called" << std::endl;
  for (int i = 0; i < length; i++)
    delete this->slot[i];
} 

MateriaSource::MateriaSource(const MateriaSource &m){
	// std::cout << "MateriaSource Copy constructor called" << std::endl;
	 *this = m;
} 

MateriaSource & MateriaSource::operator =(const MateriaSource &m){
	// std::cout << "MateriaSource Copy assignment operator called" << std::endl;
	if(this != &m)
	{ 
    int i = 0;
    while (i < length) {
       // prevent leaks in assignment a = b both a and b exits
      delete this->slot[i];
      this->slot[i] = nullptr;
      if (m.slot[i] != nullptr)
        this->slot[i] = m.slot[i]->clone(); 
      else
        this->slot[i] = nullptr;
      i++;
    }
	} 
	return *this;
} 

void MateriaSource::learnMateria(AMateria *a){ 
  if (length >= 0 && length < 4){
    int i  = 0;
    while (i <= length) {
      if (this->slot[i] == nullptr)
      {
        this->slot[i] = a;
        length++;
        break;
      }
      i++;
    }
  }
}

AMateria *MateriaSource::createMateria(const std::string &type){
  if (length >= 0 && length < 4){
    int i  = 0;
    while (i <= length) {
      if (this->slot[i] != nullptr && this->slot[i]->getType() == type) 
        return (this->slot[i]->clone());
      i++;
    }
  }
  return 0;
}
