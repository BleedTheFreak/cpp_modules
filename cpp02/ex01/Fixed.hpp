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
private:
  int raw;
  static const int fraction;
};

std::ostream & operator << (std::ostream &out , const Fixed &f);

#endif
