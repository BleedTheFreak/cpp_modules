#ifndef FIXED_CLASS
#define FIXED_CLASS

#include <iostream>
#include <cmath>

class Fixed
{
public:
  Fixed();
  Fixed(const int raw);
  Fixed(const float raw);
  Fixed(const Fixed &f);
  ~Fixed();
  Fixed & operator=(const Fixed &f);
  int getRawBits() const;
  void setRawBits(int const raw);
  float toFloat() const;
  int toInt() const;
  bool operator<(const Fixed &f) const;
  bool operator>(const Fixed &f) const;
  bool operator<=(const Fixed &f) const;
  bool operator>=(const Fixed &f) const;
  bool operator == (const Fixed &f) const;
  bool operator != (const Fixed &f) const;
  Fixed operator +(const Fixed &f) const;
  Fixed operator -(const Fixed &f) const;
  Fixed operator *(const Fixed &f) const;
  Fixed operator /(const Fixed &f) const;
  Fixed & operator++();
  Fixed & operator--();
  Fixed  operator++(int);
  Fixed  operator--(int);
  static Fixed & min(Fixed &f1, Fixed &f2);
  static const Fixed & min(const Fixed &f1, const Fixed &f2);
  static Fixed & max(Fixed &f1, Fixed &f2);
  static const Fixed & max(const Fixed &f1, const Fixed &f2);
private:
  int raw;
  static const int fraction;
};

std::ostream & operator<<(std::ostream &out , const Fixed &f);

#endif
