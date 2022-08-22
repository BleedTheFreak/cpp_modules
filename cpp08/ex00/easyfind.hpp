#ifndef EASYFIND
#define EASYFIND

#include <exception>
#include <iostream>
#include <iterator>

template<typename T>
bool easyfind(T a, int n){
    return (std::find(a.begin(),a.end(),n) != a.end());
}

#endif
