// if-statements
#include "../std_lib_facilities.h"
int main()
{
  int a;
  int b;
  cout << "Please enter two integers\n";
  cin >> a >> b;
  if (a<b)			// condition
    cout << "max(" << a << "," << b << ") is " << b << '\n';
  // 1st alternative (taken if condition is true)
  else cout << "max(" << a << "," << b << ") is " << a << '\n';
  // 2nd alternative (taken if condition is false)
}
