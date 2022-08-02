#ifndef POINT_CLASS
#define POINT_CLASS

#include "Fixed.hpp"
#include <iostream>

class Point
{
public:
  Point();
  Point(const float x , const float y);
  Point(const Point &p);
  Point & operator=(const Point &p);
  float static areaOfTraingel(const Point &p1,const Point &p2,const Point &p3);
  ~Point();

private:
  Fixed x;
  Fixed y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif // !POINT_CLASS
