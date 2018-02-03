#include <iostream>
#include <vector>

using namespace std;
template<typename T, typename U>
T f(vector<T>& vt, vector<U>& vu)
{
  T sum {0};
  if (vt.size() != vu.size()) {
    cout << "Vectors must have the same size" << endl;
  } else {
    for (int i = 0; i < vt.size(); ++i) {
      sum += vt[i]*vu[i];
    }
  }
  return sum;
}

int main()
{
  vector<int> vi {1, 1, 1};
  vector<double> vd {0, 1.1, 0};

  int si {0};
  si = f(vi, vd);
  cout << si << endl;

  double sd {0};
  sd = f(vd, vi);
  cout << sd << endl;
}
