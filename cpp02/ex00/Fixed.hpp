#ifndef FIXED_CLASS
#define FIXED_CLASS

#include <iostream>

class Fixed
{
public:
  Fixed();
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
