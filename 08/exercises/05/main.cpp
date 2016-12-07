#include "../../../std_lib_facilities.h"
#include "change_order.h"

int main()
{
  vector<int> v0 {1, 3, 5, 7, 9};
  cout << "The original vector is: " << endl;
  for (int i : v0) {
    cout << i << '\t';
  }
  cout << endl;

  cout << "Calling change_order1(), " << endl;
  vector<int> v = change_order1(v0);
  for (int i : v) {
    cout << i << '\t';
  }
  cout << endl;
  
  cout << "The original vector is: " << endl;
  for (int i : v0) {
    cout << i << '\t';
  }
  cout << endl;

  cout << "Calling change_order2(), " << endl;
  change_order2(v0);
  cout << "The original vector is: " << endl;
  for (int i : v0) {
    cout << i << '\t';
  }
  cout << endl;
}
