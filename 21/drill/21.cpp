#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

ostream& operator<<(ostream& os, const vector<double>& vd)
{
  for (const auto& p : vd)
    os << p << endl;

  return os;
}

int main()
{
  vector<double> vd;
  ifstream is {"21.in"};
  double d;
  while (is >> d) {
    vd.push_back(d);
  }

  cout << vd;
}
