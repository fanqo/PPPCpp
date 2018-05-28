#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

struct Record {
  double unit_price;
  int units;
};

double price(double v, const Record& r)
{
  return v + r.unit_price*r.units;
}

int main()
{
  vector<Record> r = {{2.0, 2}, {3.0, 1}, {5.0, 3}, {6.0, 1}};
  double total = accumulate(r.begin(), r.end(), 0.0, price);
  cout << total << endl;
}
