#include <iostream>
#include <map>

using namespace std;
int main()
{
  map<string, int> msi;
  msi["a"] = 47;
  msi["b"] = 48;
  msi["c"] = 49;
  msi["d"] = 50;
  msi["e"] = 51;

  msi.erase(msi.find("c"));

  for (const auto& p : msi)
    cout << p.first << ": " << p.second << endl;
}
