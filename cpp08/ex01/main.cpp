#include <exception>
#include <iostream>
#include "Span.hpp"

int main()
{
  try 
  {
    Span spBig(5);
    spBig.rangeOfIterators(spBig.begin(), spBig.begin() + 5 , 5);
    std::cout << spBig.shortestSpan() << std::endl;
    std::cout << spBig.longestSpan() << std::endl;
    // Span sp = Span(5);
    // sp.addNumber(6);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);
    // // sp.addNumber(13);
    // std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;
  }
  catch(std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
return 0;
}
