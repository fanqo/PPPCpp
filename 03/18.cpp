// conversion of char to int is safe
#include "../std_lib_facilities.h"
int main()
{
  char c = 'x';
  int i1 = c;
  int i2 = 'x';

  char c1 = i1;

  cout << "char c: " << c
       << ", int i1 = c: " << i1
       << ", int i2 = 'x': " << i2
       << ", char c1 = i1: " << c1;
}

// there are other conversions considered safe:
//   bool --> char, bool --> int,
//   bool --> double, char --> int,
//   char --> double, int --> double
