#include <iostream>
#include <vector>

using namespace std;
template<typename T>
void f(vector<T>& v1, vector<T>& v2)
{
  if (v1.size() != v2.size()) {
    cout << "Vectors must have the same size " << endl;
  } else {
    for (int i = 0; i < v1.size(); ++i) {
      v1[i] += v2[i];
    }
  }
}

template<typename T>
ostream& operator<<(ostream& os, vector<T> v) {
  for (int i = 0; i < v.size(); ++i)
    os << v[i] << " ";

  return os;
}

template<typename T>
void test(vector<T>& v1, vector<T>& v2)
{
  cout << "Before function f(): " << endl;
  cout << v1 << endl;
  f(v1, v2);
  cout << "After function f(): " << endl;
  cout << v1 << endl;
}


int main()
{
  vector<int> vi1 {1, 1, 1, 1, 1};
  vector<int> vi2 {2, 2, 2, 2, 2};
  test(vi1, vi2);

  vector<char> vc1 {'A', 'A', 'A'};
  vector<char> vc2 {'B', 'B', 'B'};
  test(vc1, vc2);

  vector<string> vs1 {"A", "A", "A"};
  vector<string> vs2 {"B", "B", "B"};
  test(vs1, vs2);
}
