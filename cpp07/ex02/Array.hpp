#ifndef TARRAY_CLASS
#define TARRAY_CLASS

#include <stdexcept>
#include <iostream>

template<typename T>
class Array
{
public:
  Array()
  {
    _size = 0;
    arr = new T[_size];
  }

  Array(unsigned int n)
  {
    _size = n;
    arr = new T[n];
  }

  Array(const Array &f)
  {
    *this = f;
  }

  Array &operator=(const Array &f)
  {
    this->_size = f._size;
    arr = new T[f._size];
    for(u_int i = 0; i < f._size ; i++)
        arr[i] = f.arr[i];
    return *this;
  }

  ~Array()
  {
    delete [] arr;
  }

  unsigned int size() const{
    return _size;
  }

  T & operator[](const u_int i){
      if (i < _size)
        return arr[i];
      throw std::out_of_range("index out of range exception!");
  }
private:
  T *arr;
  unsigned int _size;
};

#endif
