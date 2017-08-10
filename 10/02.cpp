#include "../std_lib_facilities.h"
int main{}
  try{
    cout << "Please enter name of output file: ";
    string oname;
    cin >> oname;
    ofstream ost {oname};
    if(!ost) error("can't open file: ", oname);
    return 0;
  }
  catch (exception& e) {
    cerr << "error: " << e.what() << '\n';
    return 1;
  }
  catch (...) {
    cerr << "Unkown error" << '\n';
    return 2;
  }