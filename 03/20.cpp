// conversion of char to int is safe
// using universal and uniform initialization
#include "../std_lib_facilities.h"
int main()
{
  char c {'x'};
  int i1 {c};
  int i2 {'x'};

  char c1 {i1};

  cout << "char c: " << c
       << ", int i1 = c: " << i1
       << ", int i2 = 'x': " << i2
       << ", char c1 = i1: " << c1;
}

