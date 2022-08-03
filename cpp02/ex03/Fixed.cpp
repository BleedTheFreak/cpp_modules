#include "Fixed.hpp"

Fixed::Fixed():raw(0){
}

Fixed::~Fixed(){
}

Fixed::Fixed(const Fixed &f){
  *this = f;
}

Fixed & Fixed::operator=(const Fixed &f)
{
  if (this !=  &f)
    this->raw = f.raw;
  return *this;
}

int Fixed::getRawBits() const{
  return this->raw;
}

void Fixed::setRawBits(int const raw)
{
  this->raw = raw;
}

Fixed::Fixed(const int n){
  raw = (int)(n * (1 << fraction));
}

Fixed::Fixed(const float n)
{
  raw = (int)(std::roundf(n * (1 << fraction)));
}

float Fixed::toFloat() const {
  return (float)(raw / (float) (1 << fraction));
}

int Fixed::toInt() const
{
  return (int)(raw / (int) (1 << fraction));
}

std::ostream & operator<< (std::ostream &out, const Fixed &f)
{
  out << f.toFloat();
  return out;
}

bool Fixed::operator<(const Fixed &f) const{
  return (this->raw < f.raw);
}

bool Fixed::operator>(const Fixed &f) const{
  return (f < *this);
}

bool Fixed::operator<=(const Fixed &f) const{
  return !(*this > f);
}

bool Fixed::operator>=(const Fixed &f) const{
  return !(*this < f);
}

bool Fixed::operator==(const Fixed &f) const{
  return (*this < f && *this > f);
}

bool Fixed::operator!=(const Fixed &f) const{
  return !(*this == f);
}

Fixed Fixed::operator+(const Fixed &f) const{
  Fixed ret;
  ret.setRawBits(this->raw + f.raw);
  return (ret);
}

Fixed Fixed::operator-(const Fixed &f) const{
  Fixed ret;
  ret.setRawBits(this->raw - f.raw);
  return (ret);
}

Fixed Fixed::operator*(const Fixed &f) const{
  Fixed ret;
  ret.setRawBits((this->raw * f.raw) >> fraction);
  return (ret);
}

Fixed Fixed::operator/(const Fixed &f) const{
  Fixed ret;
  ret.setRawBits((this->raw << fraction) / f.raw);
  return (ret);
}

Fixed & Fixed::operator++()
{
  raw += 1;
  return *this;
}

Fixed Fixed::operator++(int)
{
  Fixed old = *this;
  operator++();
  return old;
}

Fixed & Fixed::operator--()
{
  raw -= 1;
  return *this;
}

Fixed Fixed::operator--(int)
{
  Fixed old = *this;
  operator++();
  return old;
}

Fixed & Fixed::min(Fixed &f1, Fixed &f2){
  return (f1 < f2) ? f1 : f2;
}

Fixed & Fixed::max(Fixed &f1, Fixed &f2){
  return (f1 > f2) ? f1 : f2;
}

const Fixed & Fixed::min(const Fixed &f1, const Fixed &f2){
  return (f1 < f2) ? f1 : f2;
}

const Fixed & Fixed::max(const Fixed &f1, const Fixed &f2){
  return (f1 > f2) ? f1 : f2;
}

const int Fixed::fraction = 8;
