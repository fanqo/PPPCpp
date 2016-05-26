// for review 27, test begin(), end() and size() of vector
#include "../std_lib_facilities.h"
int main()
{
  vector<string> vs = {"1st", "2nd", "3rd", "4th", "5th", "6th"};
  cout << "Elements of vector are: ";
  for (string x : vs)
    cout << x << " ";
  cout << '\n';

  cout << "size() of vector is: " << vs.size() << '\n';

  return 0;
}
