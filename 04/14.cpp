// write out character and corresponding integer values, for version
#include "../std_lib_facilities.h"
int main()
{
  for (char ch = 'a'; ch <= 'z'; ++ch)
    cout << ch << '\t' << int(ch) << '\n';

  for (char ch = 'A'; ch <= 'Z'; ++ch)
    cout << ch << '\t' << int(ch) << '\n';

  return 0;
}
