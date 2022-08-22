#include "easyfind.hpp"
#include <vector>
#include <list>
#include <array>
#include <deque>
#include <forward_list>

int main (int , char **)
{
  std::vector<int>  v;
  // std::list<int>  v;
  // std::array<int,10>  v;
  // std::deque<int>  v;
  // std::forward_list<int>  v;

  //array
  // for (int i = 0; i < 10 ; i++)
  //   v[i] = i;

  //vector deque list
  for (int i = 0; i < 10 ; i++)
    v.push_back(i);

  //forward_list
  // for (int i = 0; i < 10 ; i++)
  //   v.push_front(i);
  std::cout << std::boolalpha << easyfind(v, 2) << std::endl;
  return 0;
}
