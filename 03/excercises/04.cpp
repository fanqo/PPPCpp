// operating two integers
#include "../../std_lib_facilities.h"
int main()
{
  cout << "Please input two integers:\n";
  int val1;
  int val2;
  cin >> val1 >> val2;

  if (val1 < val2) cout << val1 << " is less than " << val2 << '\n';
  if (val1 > val2) cout << val1 << " is greater than " << val2 << '\n';
  if (val1 == val2) cout << val1 << " equals " << val2 << '\n';

  cout << "The sum of " << val1 << " and " << val2
       << " is " << val1+val2 << '\n';
  cout << "The difference of " << val1 << " and " << val2
       << " is " << val1-val2 << '\n';
  cout << "The product of " << val1 << " and " << val2
       << " is " << val1*val2 << '\n';
  cout << "The ratio of " << val1 << " and " << val2
       << " is " << val1/val2 << '\n';
  return 0;
}
