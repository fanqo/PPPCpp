#include "../../../std_lib_facilities.h"
#include "string_length.h"
#include "length_ends.h"
#include "lexi_ends.h"

int main()
{
  vector<string> v {"write a function", 
      "that takes a vector<string> argument",
      "and returns a vector<int>",
      "containing the number of characters"};
  
  vector<int> nc = string_length(v);
  cout << "The numbers of characters in each string are: ";
  for (int i : nc)
    cout << i << '\t';
  cout << endl;

  length_ends(v);
  lexi_ends(v);
}
