// traversing a vector
#include "../std_lib_facilities.h"
int main()
{
  vector<int> v = {5, 7, 9, 4, 6, 8};
  for (int i = 0; i < v.size(); ++i)
    cout << "v[" << i << "] == " << v[i] << '\n';

  return 0;
}
