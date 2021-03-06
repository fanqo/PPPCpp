#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

struct Item {
  Item();
  Item(string, int, double);
  string name;
  int iid;
  double value;
};

Item::Item()
  : name{"00"}, iid{0}, value{0.0}
{}

Item::Item(string ss, int ii, double dd)
  : name{ss}, iid{ii}, value{dd}
{}

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

struct sort_name {
  bool operator()(const Item& i1, const Item& i2) const
  {
    if (i1.name < i2.name) return true;
    return false;
  }
};

struct sort_iid {
  bool operator()(const Item& i1, const Item& i2) const
  {
    if (i1.iid < i2.iid) return true;
    return false;
  }
};

struct sort_value {
  bool operator()(const Item& i1, const Item& i2) const
  {
    if (i1.value < i2.value) return false;
    return true;
  }
};

int main()
{
  ifstream is {"01in"};
  vector<Item> vi;
  Item ii;

  while (is >> ii) {
    vi.push_back(ii);
  }
  vi.push_back(Item("horse shoe", 99, 12.34));
  vi.push_back(Item("Cannon S400", 9988, 499.95));
  sort(vi.begin(), vi.end(), sort_value());

  for (int i = 0; i < vi.size(); ++i)
  {
    cout << vi[i];
  }
}
  
