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

class Less_than {
  double v;
public:
  Less_than(double vv) : v(vv) {}
  bool operator()(double d) const {return d < v;}
};

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

  double sumd = 0;
  for (int i = 0; i < vd.size(); ++i) {
    sumd += vd[i];
  }
  double meand = sumd/vd.size();
  
  vector<double> vd2;
  vd2.resize(vd.size());
  copy_if(vd.begin(), vd.end(), vd2.begin(), Less_than(meand));
  cout << vd2;

  cout << endl;
  reverse(vd.begin(), vd.end());
  cout << vd;

  cout << endl;
  sort(vd.begin(), vd.end());
  cout << vd;
}
