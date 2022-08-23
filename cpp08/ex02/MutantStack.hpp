#ifndef MUTANTSTACK_CLASS
#define MUTANTSTACK_CLASS
#include <iterator>
#include <stack>
#include <deque>
#include <iostream>

template<typename T , typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{

  public:
    typedef typename Container::iterator  iterator;
    typedef typename Container::reverse_iterator  reverse_iterator;

    iterator begin()
    {
      return this->c.begin();
    }

    iterator end()
    {
      return this->c.end();
    }

    reverse_iterator rbegin()
    {
      return this->c.rbegin();
    }

    reverse_iterator rend()
    {
      return this->c.rend();
    }

    MutantStack<T , Container>():std::stack<T, Container>(){
    }

    MutantStack<T, Container>(const MutantStack<T, Container> & m)
    {
      *this = m;
    }

    MutantStack<T, Container> & operator=(const MutantStack<T, Container> & m)
    {
      if (this != &m)
      {
        this->c = m.c;
      }
      return *this;
    }

    ~MutantStack<T, Container>(){

    }
};

#endif
