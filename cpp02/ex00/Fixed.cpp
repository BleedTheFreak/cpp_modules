#include "Fixed.hpp"


Fixed::Fixed():raw(0){
  std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
  std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f){
  std::cout << "Copy constructor called" << std::endl;
  *this = f;
}

Fixed & Fixed::operator=(const Fixed &f)
{
  std::cout << "Copy assignment operator called" << std::endl;
  this->raw = f.getRawBits();
  return *this;
}

int Fixed::getRawBits() const{
  std::cout << "getRawBits member function called" << std::endl;
  return this->raw;
}

void Fixed::setRawBits(int const raw)
{
  this->raw = raw;
}

const int Fixed::fraction = 8;
