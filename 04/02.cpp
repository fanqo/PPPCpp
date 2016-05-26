// test constant expression
#include "../std_lib_facilities.h"
int main()
{
  constexpr int max = 17;	// a literal is a constant expression

  int val = 19;

  cout << max+2 << " " << val+2;
  // max+2 a constant expression (a const int plus a literal)
  // val+2 not a constant expression: it uses a variable
}
