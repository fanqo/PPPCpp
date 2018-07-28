#include <iostream>
#include <iomanip>   // setpresicion

using namespace std;

int main()
{
  // int n = 333;
  int n  = 10;
  float x = 1.0/n;
  float sum = 0;
  for (int i = 0; i < n; ++i) sum += x;
  cout << setprecision(15) << sum << '\n';
}
