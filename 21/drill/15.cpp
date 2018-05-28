#include <iostream>
#include <map>

using namespace std;
bool read_msi(map<string, int>& m)
{
  string s;
  int i;
  while(cin >> s >> i) {
    m[s] = i;
    return true;
  }
  return false;
}

int main()
{
  map<string, int> msi;
  msi["a"] = 47;
  msi["b"] = 48;
  msi["c"] = 49;
  msi["d"] = 50;
  msi["e"] = 51;

  msi.erase(msi.find("c"));
  while(read_msi(msi));

  for (const auto& p : msi)
    cout << p.first << ": " << p.second << endl;
}
