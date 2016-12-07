#include "../../../std_lib_facilities.h"
#include "print.h"
void print(string s, vector<int>& a)
{
  cout << s << endl;
  for (int i: a) {
    cout << i << '\t';
  }
  cout << endl;
}
