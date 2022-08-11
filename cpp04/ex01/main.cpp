#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
  // const Animal* j = new Dog();
  // const Animal* i = new Cat();
  // delete j;//should not create a leak
  // delete i;

  // Animal A;
  // A.makeSound();

  Animal *Array[4];
  for (int i = 0; i < 4 ;i++)
    if (i < 2)
      Array[i] = new Dog();
    else
      Array[i] = new Cat();
  for (int i = 0; i < 4 ;i++)
  {
    Array[i]->makeSound();
    delete Array[i];
  }
  // while(1);
  return 0;
}
