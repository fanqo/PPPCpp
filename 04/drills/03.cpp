//
#include "../../std_lib_facilities.h"
int main()
{
  int i1 = 0;
  int i2 = 0;
  cout << "Please enter two integers:\n";
  while (cin >> i1 >> i2)
    if (i1 < i2)
      cout << "the smaller value is: " << i1 << '\n'
	   << "the larger value is: " << i2 << '\n';
    else if (i1 > i2)
      cout << "the smaller value is: " << i2 << '\n'
	   << "the larger value is: " << i1 << '\n';
    else
      cout << "the numbers are equal" << '\n';
  
  return 0;
}
