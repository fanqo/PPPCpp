#include "../../../std_lib_facilities.h"
#include "string_length.h"

vector<int> string_length(vector<string>& v)
{
  vector<int> l(v.size());	// length vector has the same size with v
  for(int i = 0; i < v.size(); ++i) {
    l[i] = v[i].size();
  }
  return l;
}
