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

Fixed::Fixed(const int n){
  std::cout << "Int constructor called" << std::endl;
  raw = (int)(n * (1 << fraction));
}

Fixed::Fixed(const float n)
{
  std::cout << "Float constructor called" << std::endl;
  raw = (int)(std::roundf(n * (1 << fraction)));
}

float Fixed::toFloat() const {
  return (float)(raw / (float) (1 << fraction));
}

int Fixed::toInt() const
{
  return (int)this->toFloat();
}


std::ostream & operator<< (std::ostream &out, const Fixed &f)
{
  out << f.toFloat();
  return out;
}

const int Fixed::fraction = 8;
