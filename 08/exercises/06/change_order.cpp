#include "../../../std_lib_facilities.h"
#include "change_order.h"
// the two functions have the same function body

vector<string> change_order1(vector<string> v)
{
  for(int i = 0; i < v.size()/2; ++i) {
    swap(v[i], v[v.size()-1-i]);
  }
  return v;
}

void change_order2(vector<string> & v)
{
  for(int i = 0; i < v.size()/2; ++i) {
    swap(v[i], v[v.size()-1-i]);
  }
}
    

