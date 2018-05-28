#include <iostream>
#include <numeric>
#include <functional>
#include <vector>

using namespace std;
int main()
{
  vector<double> a = {1.1, 2.2, 3.3, 4.4};
  cout << accumulate(a.begin(), a.end(), 1.0, multiplies<double>());
  cout << endl;
}
