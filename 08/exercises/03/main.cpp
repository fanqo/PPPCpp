#include "../../../std_lib_facilities.h"
#include "../02/print.h"
#include "fibonacci.h"
int main()
{
  int x {1};
  int y {2};
  int n {5};
  vector<int> v(n);
  string s {"Fibonacci: "};
  
  fibonacci(x, y, v, n);
  print(s, v);
}
  
