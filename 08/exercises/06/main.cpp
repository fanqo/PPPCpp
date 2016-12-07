#include "../../../std_lib_facilities.h"
#include "change_order.h"

int main()
{
  vector<string> v0 {"a", "b", "c", "d", "e", "f"};
  cout << "The original vector is: " << endl;
  for (string i : v0) {
    cout << i << '\t';
  }
  cout << endl;

  cout << "Calling change_order1(), " << endl;
  vector<string> v = change_order1(v0);
  for (string i : v) {
    cout << i << '\t';
  }
  cout << endl;
  
  cout << "The original vector is: " << endl;
  for (string i : v0) {
    cout << i << '\t';
  }
  cout << endl;

  cout << "Calling change_order2(), " << endl;
  change_order2(v0);
  cout << "The original vector is: " << endl;
  for (string i : v0) {
    cout << i << '\t';
  }
  cout << endl;
}
