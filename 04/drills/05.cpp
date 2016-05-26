//
#include "../../std_lib_facilities.h"
int main()
{
  double d1 = 0;
  double d2 = 0;
  double smaller = 0;
  double larger = 0;
  cout << "Please enter two floating-point numbers:\n";
  while (cin >> d1 >> d2)
    if (d1 != d2) {
      if (d1 < d2) {
	smaller = d1;
	larger = d2;
      }
      else {
	smaller = d2;
	larger = d1;
      }
      
      cout << "the smaller value is: " << smaller << '\n'
	   << "the larger value is: " << larger << '\n';
      if ((larger - smaller) < 1.0/100)
	cout << "the numbers are almost equal" << '\n';
    }
    else
      cout << "the numbers are equal" << '\n';
  
  return 0;
}
