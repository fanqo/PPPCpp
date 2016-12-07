#include "../../../std_lib_facilities.h"

void f(const int);

int main()
{
  int i = 3;
  f(i);
}

void f(const int i)
{
  cout << i*i*i-2*i+1 << endl;	// x^3-2x+1
}
