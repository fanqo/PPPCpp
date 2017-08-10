#include "../std_lib_facilities.h"
int main()
  try{
    cout << "Please enter input file name: ";
    string iname;
    cin >> iname;
    ifstream ist {iname};
    if(!ist) error("can't open input file ", iname);
    return 0;
  }
  catch (exception& e){
    cerr << "error: " << e.what() << '\n';
    return 1;
  }
  catch (...) {
    cerr << "Unknown error" << '\n';
    return 2;
  }