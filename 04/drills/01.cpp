//
#include "../../std_lib_facilities.h"
int main()
{
  int i1 = 0;
  int i2 = 0;
  cout << "Please enter two integers:\n";
  while (cin >> i1 >> i2)
    cout << i1 << '\t' << i2 << '\n';

  return 0;
}
