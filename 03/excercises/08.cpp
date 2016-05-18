// test an integer is odd or even
#include "../../std_lib_facilities.h"
int main()
{
  cout << "Please enter an integer:\n";
  int number {0};
  int reminder {0};
  cin >> number;
  reminder = number % 2;
  if (reminder == 0) cout << number << " is even.\n";
  if (reminder == 1) cout << number << " is odd.\n";

  return 0;
}
