#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( 10.5f);
Fixed const c( 40.5f);
Fixed const d( b );
//test .gitnore
//mounire
a = b / c;
/*
std::cout << (b < c) << std::endl;
std::cout << (b > c) << std::endl;
std::cout << (b >= c) << std::endl;
std::cout << (b <= c) << std::endl;
std::cout << (b == c) << std::endl;
std::cout << (b != c) << std::endl;
  */
  std::cout << a << std::endl;
return 0;
}
