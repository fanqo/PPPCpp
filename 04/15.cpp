// calculate and print a table of squares of 0-99, using function
#include "../std_lib_facilities.h"

int square(int i)
{
  int sum = 0;
  for (int v = 0; v < i; ++v) sum = sum+i;
  return sum;
}
    
int main()
{
  for (int i = 0; i < 100; ++i)
    cout << i << '\t' << square(i) << '\n';
  return 0;
}
    
