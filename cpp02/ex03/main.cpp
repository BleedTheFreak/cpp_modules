#include "Point.hpp"
#include <iostream>

int main( void ) {
  //Input: A = (0, 0), B = (10, 30), C = (20, 0), P(10, 15)
  //Output: Inside
  Point A(0,0);
  Point B(10,30);
  Point C(20,0);
  Point P(10,15);
  std::cout << bsp(A, B, C, P) << std::endl;
  //Input: A = (0, 0), B = (10, 30), C = (20, 0), P(30, 15)
  //Output: Outside
  Point A1(0,0);
  Point B1(10,30);
  Point C1(20,0);
  Point P1(30,15);
  std::cout << bsp(A1, B1, C1, P1) << std::endl;
return 0;
}
