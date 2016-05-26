// write out a table of characters with their corresponding integer values
#include "../std_lib_facilities.h"
int main()
{
  char ch = 'a';
  while (ch <= 'z') {
    cout << ch << '\t' << int(ch) << '\n';
    ch = int(ch)+1;
  }
  return 0;
}
