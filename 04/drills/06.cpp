//
#include "../../std_lib_facilities.h"
int main()
{
  double d = 0;
  cout << "Please enter a floating-point number:\n";
  cin >> d;
  double smallest = d;
  double largest = d;
  while (cin >> d) {
    cout << d;
    if (d < smallest) {
      cout << " the smallest so far";
      smallest = d;
    }
    else if (d > largest) {
      cout << " the largest so far";
      largest = d;
    }
    cout << '\n';
  }
  return 0;
}
