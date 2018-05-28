#include <iostream>
#include <list>
// #include <algorithm>

using namespace std;

template<typename In, typename Pred>
In find_if2(In first, In last, Pred pred)
{
  while (first != last && pred(*first)) ++first;
  return first;
}

class Larger_than {
  int v;
public:
  Larger_than(int vv) : v(vv) {}   // store the argument
  bool operator()(int x) const {return x > v;}  // compare
};

void f(list<double>& v, int x)
{
  auto p = find_if2(v.begin(), v.end(), Larger_than(x));
  if (p != v.end()) {
    cout << "We found a value > " << x << endl;
  } else {
    cout << "We do not find a value > " << x << endl;
  }
}

int main()
{
  list<double> v1 = { 1, 3, 5, 7, 9};
  f(v1, 8);
  f(v1, 10);
}
