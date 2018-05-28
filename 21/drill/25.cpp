#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& vd)
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

  vector<int> vi;
  vi.resize(vd.size());
  if (vi.size() < vd.size()) cerr << "target container too small\n";
  copy(vd.begin(), vd.end(), vi.begin());
  cout << "vd[i]" << "\t" << "vi[i]" << endl;

  double sumd = 0;
  int sumi = 0;
  for (int i = 0; i < vd.size(); ++i) {
    sumd += vd[i];
    sumi += vi[i];
  }
  cout << "The difference of the sums of the elements of vd and vi is "
    << sumd - sumi << endl;
}
