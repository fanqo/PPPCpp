//
#include "../../std_lib_facilities.h"
int main()
{
  double d1 = 0;
  double d2 = 0;
  cout << "Please enter two floating-point numbers:\n";
  while (cin >> d1 >> d2)
    if (d1 < d2)
      cout << "the smaller value is: " << d1 << '\n'
	   << "the larger value is: " << d2 << '\n';
    else if (d1 > d2)
      cout << "the smaller value is: " << d2 << '\n'
	   << "the larger value is: " << d1 << '\n';
    else
      cout << "the numbers are equal" << '\n';
  
  return 0;
}
