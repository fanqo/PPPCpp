#include "../../../std_lib_facilities.h"
#include "print_until_ss.h"

void print_until_ss(vector<string> v, string quit)
{
  int i = 0;
  for(int s : v) {
    if (s == quit) {
      ++i;
      if (i == 2) return;
    }
    cout << s << '\n';
  }
}
