#include "Point.hpp"
#include "Fixed.hpp"

Point::Point():x(Fixed(0)),y(Fixed(0)){
}

Point::Point(const float x , const float y):x(Fixed(x)),y(Fixed(y)){
}

Point::~Point(){
}

Point::Point(const Point &p)
{
    *this = p;
}

Point & Point::operator=(const Point &p){
  if (this !=  &p)
  {
    this->x = p.x;
    this->y = p.y;
  }
  return *this;
}

int ft_abs(int n)
{
  return (n < 0) ? (n * -1) : n;
}

float Point::areaOfTraingel(const Point &p1, const Point &p2, const Point &p3){
  Fixed f;
  f = p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y);
  return (ft_abs(f.toFloat() / 2));
}
