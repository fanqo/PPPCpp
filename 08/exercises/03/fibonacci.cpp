#include "../../../std_lib_facilities.h"
void fibonacci(int x, int y, vector<int>& v, int n)
{
  if(n<2) error("At least two elements, n should not be less than 2");
  v[0] = x;
  v[1] = y;
  for(int i = 2; i < n; ++i) {
    v[i] = v[i-1]+v[i-2];
  }
}
