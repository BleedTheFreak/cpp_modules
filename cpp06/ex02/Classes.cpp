#include "Classes.hpp"
#include <cstdlib>
#include <ctime>
#include <exception>

Base::~Base(){

}

A::~A(){

}

B::~B(){

}

C::~C(){

}

Base * generate(void){
  srand(time(0));
  int _rand  = rand() % 150;
  if (_rand <= 50)
    return new A;
  if (_rand > 50 && _rand <= 100)
    return new B;
  return new C;
}

void identify(Base * p){
  if (dynamic_cast<A *>(p))
    std::cout << "p : A" << std::endl;
  else if (dynamic_cast<B *>(p))
    std::cout << "p : B" << std::endl;
  else if (dynamic_cast<C *>(p))
    std::cout << "p : C" << std::endl;
}

void identify(Base & p){
  try {
      (void) dynamic_cast<A &>(p);
      std::cout << "p : A" << std::endl;
  } catch (std::exception &) {
    try
    {
      (void) dynamic_cast<B &>(p);
      std::cout << "p : B" << std::endl;
    }
    catch (const std::exception&)
    {
     try
     { 
      (void) dynamic_cast<C &>(p);
      std::cout << "p : C" << std::endl;
     }
     catch (const std::exception&)
     {
        //
      }
    }
  }
}
