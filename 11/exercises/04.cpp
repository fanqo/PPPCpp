#include "../../std_lib_facilities.h"

int str_to_int (string s){
  istringstream is1 {s};
  istringstream is2 {s};
  char c;
  int i;
  
  is1 >> c;
  if (c == '0'){
    is1 >> c;
    if (c == 'x'){
      is2 >> hex >> i;
    } else if (isdigit(c)){
      is2 >> oct >> i;
    }
  } else {
    is2 >> i;
  }
  return i;
}

int main()
  try{
    cout << "Please enter integers with prefix: " << endl;
    vector<string> strs;
    vector<int> ints;
    for (string s; cin >> s;){
      strs.push_back(s);
      ints.push_back(str_to_int(s));
    }
    cout << "Entered integers are: " << endl;
    for (int i = 0; i < ints.size(); ++i){
      cout << strs[i] << ": " << ints[i] << endl;
    }
    
    return 0;
  }
  
  catch (exception& e){
    cerr << "Error: " << e.what() << endl;
    return 1;
  }
  
  catch (...){
    cerr << "Unknown error" << endl;
  }  