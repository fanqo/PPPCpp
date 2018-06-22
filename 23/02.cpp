#include <iostream>
#include <sstream>

using namespace std;

template<typename T> string to_string(const T& t)
{
  ostringstream os;
  os << t;
  return os.str();
}

int main()
{
  string s1 = to_string(12.333);
  string s2 = to_string(1+5*6-99/7);

  cout << "12.333: " << s1 << endl;
  cout << "1+5*6-99/7: " << s2 << endl;
}
