// converts spelled-out numbers into digits
#include "../../std_lib_facilities.h"
int main()
{
  cout << "Please enter a spelled-out number \
(such as: \"zero\", \"three\" ...)\n";
  string output {"not a number I know."};
  string current {" "};
  while (cin >> current) {
    if (current == "zero") output = "0";
    if (current == "one") output = "1";
    if (current == "two") output = "2";
    if (current == "three") output = "3";
    if (current == "four") output = "4";
    cout << current << " is " << output << '\n';
    output = "not a number I know.";
  }
  return 0;
}
  
  
