#include "../std_lib_facilities.h"
int main()
  try{
    vector<int> v{1, 2, 3, 4};
    
    cout << v[v.size()] << '\n';
  }
 catch (exception& e) {
   cout << "error: " << e.what() << '\n';
 }
