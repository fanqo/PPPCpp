#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  cout << "sizes: " << sizeof(int) << ' ' << sizeof(float) << '\n';
  int x = 2100000009;
  float f = x;
  cout << x << ' ' << f << '\n';
  cout << setprecision(15) << x << ' ' << f << '\n';
}
