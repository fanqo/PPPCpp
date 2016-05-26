// calculate and print a table of squares 0-99
#include "../std_lib_facilities.h"
int main()
{
  int i = 0;			// start from 0
  while (i<100) {
    cout << i << '\t' << i*i << '\n';
    ++i;			// increment i (that is i becomes i+1)
  }
  return 0;
}
    
