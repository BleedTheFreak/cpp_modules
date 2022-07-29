#include "Fixed.hpp"


Fixed::Fixed():raw(0){
  std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
  std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f){
  this->raw = f.raw;
  std::cout << "Copy constructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &f)
{
  this->raw = f.raw;
  std::cout << "Copy assignment operator called" << std::endl;
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

Fixed::Fixed(const int raw){

}

Fixed::Fixed(const float n)
{
  std::cout << "called" << std::endl;
  //std::cout << raw / (1 << this->fraction) << std::endl;
  this->raw = std::roundf(n) / (1 <<  this->fraction);
  //this->raw = raw / (1 << this->fraction);
  std::cout << this->raw << std::endl;
}

const int Fixed::fraction = 8;
