#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point){
  float ABC = Point::areaOfTraingel(a, b, c);
  float PAB = Point::areaOfTraingel(a, b, point);
  float PBC = Point::areaOfTraingel(c, b, point);
  float PAC = Point::areaOfTraingel(a, c, point);
  std::cout << ABC << std::endl;
  std::cout << (PAB + PBC + PAC) << std::endl;
  return (ABC == (PAB + PBC + PAC));
}
