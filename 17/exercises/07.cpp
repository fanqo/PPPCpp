#include <iostream>

using namespace std;
int main()
{
  char* s = new char[100];
  int size = 0;
  char c {' '};

  while(cin >> c && c != EOF) {
    if (c == '!') break;
    s[size] = c;
    ++size;
  }

  for (int i = 0; i < size; ++i) {
    cout << s[i];
  }
  cout << '\n';
}

