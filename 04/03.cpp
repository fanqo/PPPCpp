// test int conversion
#include "../std_lib_facilities.h"
int main()
{
  double d = 2.5;
  int i = 2;
  double d2 = d/i;
  int i2 = d/i;
  int i3 = {d/i};		// error: double --> int conversion may narrow
  cout << d2 << " " << i2 << '\n';
  d2 = d/i;			// d2 == 1.25
  i2 = d/i;			// i2 == 1
  cout << d2 << " " << i2 << '\n';
}

