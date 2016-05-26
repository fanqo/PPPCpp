// traversing a vector, range-for-loop version
#include "../std_lib_facilities.h"
int main()
{
  vector<int> v = {5, 7, 9, 4, 6, 8};
  for (int x : v)		// for each x in v
    cout << x << '\n';

  return 0;
}
