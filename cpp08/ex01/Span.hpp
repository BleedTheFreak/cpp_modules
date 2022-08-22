#ifndef SPAN_CLASS
#define SPAN_CLASS

#include <exception>
#include <iostream>
#include <vector>

class Span
{
public:
	Span();
	Span(u_int n);
	~Span();
	Span(const Span &s);
	Span & operator =(const Span &s);
  void addNumber(int n);
  int shortestSpan();
  int longestSpan();
  class NoSpanException : public std::exception {
      public :
        const char * what() const throw();
  };
  void rangeOfIterators(std::vector<int>::iterator begin, std::vector<int>::iterator end , int n);
  std::vector<int>::iterator begin();
private: 
  std::vector<int> arr;
}; 

#endif // !SPAN_CLASS 
