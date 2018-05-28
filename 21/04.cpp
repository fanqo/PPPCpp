#include <iostream>
#include <numeric>

using namespace std;

int main()
{
  int a[] = {1, 2, 3, 4, 5};
  cout << accumulate(a, a+sizeof(a)/sizeof(int), 0);
  cout << endl;
}
