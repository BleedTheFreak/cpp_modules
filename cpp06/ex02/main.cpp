#include "Classes.hpp"

int main ()
{
  // Base *ptr = generate();
  Base &ptr = *generate();
  identify(ptr);
  return 0;
}
