#include <iostream>
#include <map>
#include <string>
#include <numeric>

using namespace std;

map<string, double> dow_price = {
  {"MMM", 81.86},
  {"AA", 34.69},
  {"MO", 54.45}
};

map<string, double> dow_weight = {
  {"MMM", 5.8549},
  {"AA", 2.4808},
  {"MO", 3.8940}
  // {"BB", 2.0345}, same key should appears in all dow_*
};

map<string, string> dow_name = {
  {"MMM", "3M Co."},
  {"AA", "Alcoa Inc."},
  {"MO", "Altria Group Inc."}
};


double weighted_value(
    const pair<string, double>& a,
    const pair<string, double>& b
    )
{
  return a.second*b.second;
}

int main()
{
  for (const auto& p : dow_price) {
    const string& symbol = p.first;
    cout << symbol << '\t'
      << p.second << '\t'
      << dow_name[symbol] << endl;
  }

  double dji_index = 
    inner_product(dow_price.begin(), dow_price.end(),
        dow_weight.begin(),
        0.0,
        plus<double>(),
        weighted_value);
  cout << "DJI index: " << dji_index << endl;
}
