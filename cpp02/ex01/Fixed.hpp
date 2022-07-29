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
private:
  int raw;
  static const int fraction;
};

#endif // !FIXE_CLASS
