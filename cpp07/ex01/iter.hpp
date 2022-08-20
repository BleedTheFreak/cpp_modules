#ifndef ITER
#define ITER

template<typename T>
void iter(T *arr, int length, void (*f)(const T&))
{
  for (int i = 0; i < length ; i++)
    f(arr[i]);
}

#endif // ! ITER
