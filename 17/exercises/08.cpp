#include <iostream>

using namespace std;
int main()
{
  string s {};
  char c;
  while (cin >> c && c != EOF){
    if (c == '!') break;
    s.push_back(c);
  }

  cout << s << '\n';
}
