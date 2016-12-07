#include "../../../std_lib_facilities.h"
#include "swaps.h"

void swap_v(int a, int b)
{
  cout << "a: " << a << ", " << "b: " << b << endl;
  int temp;
  temp = a;
  a = b;
  b = temp;
  cout << "a: " << a << ", " << "b: " << b << endl;
}

void swap_r(int& a, int& b)
{
  cout << "a: " << a << ", " << "b: " << b << endl;
  int temp;
  temp = a;
  a = b;
  b = temp;
  cout << "a: " << a << ", " << "b: " << b << endl;
}

// void swap_cr(const int& a, const int& b)
// {
//   cout << "a: " << a << ", " << "b: " << b << endl;
//   int temp;
//   temp = a;
//   a = b;
//   b = temp;
//   cout << "a: " << a << ", " << "b: " << b << endl;
// }
