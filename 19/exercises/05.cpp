#include <iostream>

using namespace std;
class Int {
  int ii;
public:
  Int() : ii {0} {};
  Int(int i) : ii {i} {};
  Int(const Int& in) : ii {in.ii} {}
  Int& operator=(const Int& in) {ii = in.ii; return *this;}
  int member() const { return ii; }
  int& set() { return ii; }
};

ostream& operator<<(ostream& os, Int in) {return os << in.member();}
istream& operator>>(istream& is, Int in) {return is >> in.set();}
Int operator+(const Int& i1, const Int& i2) { 
  return i1.member() + i2.member();
}

Int operator-(const Int& i1, const Int& i2) {
  return i1.member() - i2.member();
}

int main()
{
  Int i1;
  cout << "'Int i1;' is: " << i1 << endl;

  Int i2 {2};
  cout <<"'Int i2 {2}' is: " << i2 << endl;

  Int i3 {i2};
  cout << "'Int i3 {i2}' is: " << i3 << endl;

  cout << "'i3 + i2' is: " << i3 + i2 << endl;

  Int i4=5;
  cout << "'Int i4=5' is: " << i4 << endl;

  cout << "'i4 - i3' is: " << i4 - i3 << endl;

  Int i5;
  i5.set() = 5;
  cout << "'i5.set() = 5' is: " << i5 << endl;
  cin >> i5;
  cout << "'cin >> i5' is: " << i5 << endl; // does not work ???
}
