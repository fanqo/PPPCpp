#include "../../std_lib_facilities.h"

int main()
  try{
    cout << "Please enter input file name: " << '\n';
    string iname;
    cin >> iname;
    ifstream ifs {iname};
    if(!ifs) error("Cannot open input file");
    int n = 0;
    int sum = 0;
    int i = 0;
    while (ifs >> n){
      sum += n;
      ++i;
    }
    cout << "There are " << i << " integers, "
         << "the sum of which is " << sum << '\n';
    return 0;
  }
  catch (exception& e){
    cerr << "Error: " << e.what() << endl;
    return 1;
  }
  catch (...){
    cerr << "Unknown error" << endl;
    return 2;
  }