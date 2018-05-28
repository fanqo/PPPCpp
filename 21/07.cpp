#include <iostream>
#include <vector>
#include <list>
#include <numeric>

using namespace std;
int main()
{
  vector<double> dow_price = {
    81.86, 34.69, 54.45
  };

  list<double> dow_weight = {
    5.8549, 2.4808, 3.8940
  };

  double dji_index = inner_product(
      dow_price.begin(), dow_price.end(),
      dow_weight.begin(),
      0.0);
  cout << "DJI value: " << dji_index << endl;
}
