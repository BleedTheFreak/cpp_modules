#include "Span.hpp"
#include <algorithm>
#include <climits>
#include <exception>
#include <iterator>
#include <vector>

Span::Span(){
  arr.reserve(0);
} 

Span::Span(u_int n){
  arr.reserve(n);
} 

void Span::addNumber(int n){
  if (arr.size() < arr.capacity())
    arr.push_back(n);
  else throw std::out_of_range("array is full!");
}

Span::~Span(){
  arr.reserve(0);
} 

Span::Span(const Span &s){
	 *this = s;
} 

int Span::longestSpan() {
  int min,max;
  if (arr.size() > 1)
  {
    std::sort(arr.begin(),arr.end());
    min = *arr.begin();
    max = *arr.rbegin();
  }
  else
    throw Span::NoSpanException();
  return max - min;
}

const char *Span::NoSpanException::what() const throw(){
  return "No span exception!";
}

int Span::shortestSpan() {
  int min = INT_MAX;
  if (arr.size() > 1)
  {
    std::sort(arr.begin(),arr.end());
    for (u_int i = 0; i < arr.size() && i + 1 < arr.size(); i++)
    {
      if (arr[i + 1] - arr[i] < min)
        min = arr[i + 1] - arr[i];
    }
  }
  else
    throw Span::NoSpanException();
  return min;
}

void Span::rangeOfIterators(std::vector<int>::iterator begin, std::vector<int>::iterator end ,int n)
{
    for (std::vector<int>::iterator it = begin ;arr.capacity() && it != end ; it++)
      arr.insert(it,n++);
}

std::vector<int>::iterator Span::begin(){
  return this->arr.begin();
}

Span & Span::operator =(const Span &s){
	if(this != &s)
    this->arr = s.arr;
	return *this;
} 

