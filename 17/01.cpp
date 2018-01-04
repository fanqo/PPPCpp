#include "../std_lib_facilities.h"

void sizes(char ch, int i, int* p, bool b, double d)
{
  cout << "the size of char is " << sizeof(char) << ' '
    << sizeof(ch) << '\n';
  cout << "the size of int is " << sizeof(int) << ' '
    << sizeof(i) << '\n';
  cout << "the size of int* is " << sizeof(int*) << ' '
    << sizeof(p) << '\n';
  cout << "the size of bool is " << sizeof(bool) << ' '
    << sizeof(b) << '\n';
  cout << "the size of double is " << sizeof(double) << ' '
    << sizeof(d) << '\n';
}

int main()
{
  char ch = 'a';
  int i = 100;
  int* p;
  *p = 10;
  bool b = true;
  double d = 10.0;

  sizes(ch, i, p, b, d);
}
