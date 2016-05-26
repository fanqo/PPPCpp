// convert between digits and spell-out values
#include "../../std_lib_facilities.h"
int main()
{
  vector<string> spell_outs(10);
  spell_outs = {"zero", "one", "two", "three", "four", "five",
		"six", "seven", "eight", "nine"};
  cout << "Please enter digits or spell-out values: \n"
       << "(0, 1, ..., 9 or zero, one, ..., nine)\n";

  for (string s; cin >> s;) {
    if (s.size() == 1) {
      for (int i = 0; i < spell_outs.size(); ++i)
	if (i == stoi(s))
	  cout << "spelled-out value for " << s
	       << " is " << spell_outs[i] << '\n';
    } else {
      for (int i = 0; i < spell_outs.size(); ++i)
	if (s == spell_outs[i])
	  cout << "digit for " << s << " is " << i << '\n';
    }
  }

  return 0;
}
