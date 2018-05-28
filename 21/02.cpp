#include <iostream>
#include <vector>

using namespace std;

template<typename In, typename T>
In findw(In first, In last, const T& val)
{
  while (first != last && *first != val) ++first;
  return first;
}

template<typename In, typename T>
In findf(In first, In last, const T& val)
{
  for (In p = first; p != last; ++p)
    if (*p == val) return p;
  return last;
}

void fw(vector<int>& v, int x)
{
  auto p = findw(v.begin(), v.end(), x);
  if (p != v.end()) {
    cout << "value " << x << " is found" << endl;
  } else {
    cout << "value " << x << " is not found" << endl;
  }
}

void ff(vector<int>& v, int x)
{
  auto p = findf(v.begin(), v.end(), x);
  cout << "value " << x << " is";
  if (p == v.end())
    cout << " not";
  cout << " found" << endl;
}

int main()
{
  vector<int> v = {1, 2, 3, 4, 5, 6};
  fw(v, 3);
  ff(v, 7);
}

