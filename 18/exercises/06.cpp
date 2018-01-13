#include <iostream>
#include <string>
#include <sstream>

using namespace std;
string cat_dot(const string& s1, const string& s2, const string& s3)
{
  ostringstream os;
  os << s1 << s3 << s2;
  return os.str();
}

int main()
{
  string s = cat_dot("Niles", "Bohr", "cat");
  cout << s << endl;
}
