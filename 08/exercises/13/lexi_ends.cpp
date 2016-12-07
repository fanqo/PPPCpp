#include "../../../std_lib_facilities.h"
#include "lexi_ends.h"

void lexi_ends(vector<string>& v)
{
  string first {v[0]};
  string last {v[0]};

  for (string s : v) {
    if (first > s) first = s;
    if (last < s) last = s;
  }
  
  cout << "The first string is: "
       << first << endl;
  cout << "The last string is: "
       << last << endl;
}
