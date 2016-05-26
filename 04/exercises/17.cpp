// find the min, max, and mode of a sequence of strings
#include "../../std_lib_facilities.h"
int main()
{
  vector<string> strings;
  cout << "Please enter strings: \n";
  
  for(string s; cin >> s;)     	// read in strings
    strings.push_back(s);

  sort(strings);
  cout << "The min of the sequence of strings is: " << strings[0] << '\n'
       << "The max of the sequence of strings is: "
       << strings[strings.size()-1] << '\n';

  int n = 1;			// appear times
  int pre_n = 0;
  int index = 0;		// remember the index for reference
  for (int i = 1; i < strings.size(); ++i) {
    if (strings[i-1] == strings[i]) {
      ++n;
      if (pre_n < n) {
	pre_n = n;
	index = i;
      }
    } else {
      n = 1;
    }
  }

  cout << "The mode of the sequence of strings is: " << strings[index] << '\n'
       << "It appears " << pre_n << " times.\n";
  return 0;
}
