#include "../../../std_lib_facilities.h" // for usring string, vector
#include "print.h"
int main()
{
  string s{"This is a test for a vector"};
  vector<int> a{1, 2, 3, 4};
  print(s, a);
}
