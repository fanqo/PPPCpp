#include "../../../std_lib_facilities.h"
#include "string_length.h"
#include "length_ends.h"

void length_ends(vector<string>& v)
{
  vector<int> l = string_length(v);
  int longest_index {0};
  int shortest_index {0};
  for (int i = 1; i < l.size(); ++i) {
    if (longest_index < l[i]) longest_index = i;
    if (shortest_index > l[i]) shortest_index = i;
  }
  
  cout << "The longest string is: " 
       << v[longest_index] << endl;
  cout << "The shortest string is: "
       << v[shortest_index] << endl;
}
