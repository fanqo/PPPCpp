#include <iostream>

void copy(int* f1, int* e1, int* f2)
{
  int* v1 = f1;
  int* v2 = f2;
  for (int i = 0; i < e1 - f1; ++i)
    *(v2++) = *(v1++);
}

int main()
{
  int f1[] {1, 2, 3, 4, 5};
  int* e1 = &f1[4]+1;
  int f2[] {0, 0, 0, 0, 0};
  copy(f1, e1, f2);
  int* v2 = &f2[0];
  for (int i = 0; i < e1 - f1; ++i)
    std::cout << *(v2++) << " ";

  std::cout << std::endl;
}
