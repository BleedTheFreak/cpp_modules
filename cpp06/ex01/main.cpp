#include "Data.hpp"

int main ()
{
  uintptr_t ptr;
  Data d;

  d.a = 10;
  d.x = 2.6f;
  d.name = "Yassine";

  std::cout << "============= serialize =================" << std::endl;
  ptr = serialize(&d);
  std::cout << *reinterpret_cast<int *>(ptr) << std::endl;
  std::cout << *reinterpret_cast<float *>(ptr + 4) << std::endl;
  std::cout << *reinterpret_cast<std::string *>(ptr + 8) << std::endl;
  std::cout << "============= deserialize ===============" << std::endl;
  Data *newData = deserialize(ptr);
  std::cout << newData->a << std::endl;
  std::cout << newData->x << std::endl;
  std::cout << newData->name << std::endl;
  std::cout << "=========================================" << std::endl;

  return 0;
}
