// test constants
#include "../std_lib_facilities.h"
int main()
{
  constexpr double pi=3.14159;
  pi = 7;			// error: assignment to constant
  double c = 2*pi*r;	  // OK: we just read pi; we don't try to change it
}
