#include "iter.hpp"
#include <iostream>
#include <ostream>

template<typename T>
void print(T arg)
{
  std::cout << arg << std::endl;
}

int main ()
{
  double arrD[] = {1.1,2.2,3.3};
  std::cout << "array of doubles" << std::endl;
  iter<double>(arrD, sizeof(arrD) / sizeof(*arrD), print); 

  int arrI[] = {1,2,3};
  std::cout << "array of intgers" << std::endl;
  iter(arrI, sizeof(arrI) / sizeof(*arrI), print); 

  std::string arrS[] = {"Yassine","Taya","Bleed"};
  std::cout << "array of string" << std::endl;
  iter(arrS, sizeof(arrS) / sizeof(*arrS), print); 

  return 0;
}
