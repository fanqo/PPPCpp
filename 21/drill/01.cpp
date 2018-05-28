#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

struct Item {
  string name;
  int iid;
  double value;
};

ifstream& operator>>(ifstream& is, Item& ii)
{
  string name;
  int iid;
  double value;

  is >> name >> iid >> value;
  ii = Item{name, iid, value};
  return is;
}

ostream& operator<<(ostream& os, const Item& vi)
{
  return os << vi.name << ", " << vi.iid << ", " << vi.value << endl;
}

int main()
{
  ifstream is {"01in"};
  vector<Item> vi;
  Item ii;

  while (is >> ii) {
    vi.push_back(ii);
  }

  for (int i = 0; i < vi.size(); ++i)
  {
    cout << vi[i];
  }
}
  
