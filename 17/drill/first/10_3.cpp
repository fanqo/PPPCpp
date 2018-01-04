#include "../../../std_lib_facilities.h"

void print_vector(vector<int>& a){
  for (int i = 0; i < a.size(); ++i){
    cout << "[" << i << "] == "
      << a[i] << endl;
  }
}

int main()
{
  vector<int> a {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 
    110, 111, 112, 113, 114, 115, 116, 117, 118, 119};
  print_vector(a);
}
