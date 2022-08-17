#ifndef DATA
#define DATA

#include <stdint.h>
#include <iostream>

typedef struct {
  int a;
  float x;
  std::string name;
} Data;

Data * deserialize(uintptr_t raw);
uintptr_t serialize(Data *ptr);
#endif // !DATA
