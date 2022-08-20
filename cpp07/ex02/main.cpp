#include "Array.hpp"
#include <iostream>


// class Awesome
// {
//   public:
//     Awesome(void):_n(42){return;}
//     int get(void) const {return this->_n;}
//     private:
//     int _n;
// };

// std::ostream & operator<<(std::ostream &o, Awesome const & rhs) { o << rhs.get(); return o;}

#define MAX_VAL 750
int main(int, char**)
{
    // Array<Awesome> arr(4);
    // const Awesome a;
    // const Awesome b;
    // arr[0] = a;
    // arr[1] = b;
    // std::cout << arr[0] << std::endl;
    // std::cout << arr[1] << std::endl;
    // std::cout << arr[1] << std::endl;
    // std::cout << arr.size() << std::endl;

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    // while(1);
  return 0;
}
