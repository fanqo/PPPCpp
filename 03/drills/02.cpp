// read and write the name you want to write to
#include "../../std_lib_facilities.h"
int main()
{
  cout << "Enter the name of the person you want to write to\n";
  string name;
  cin >> name;
  cout << "Dear " << name << ",\n";
  cout << "  How are you? I am fine. I miss you.\n";
  return 0;
}
