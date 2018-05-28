#include <iostream>
#include <string>
#include <map>

using namespace std;
int main()
{
  map<string, int> words;

  for (string s; cin >> s;)
    ++words[s];

  for (const auto& p : words)
    cout << p.first << ": " << p.second << endl;
}
