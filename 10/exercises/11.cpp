#include "../../std_lib_facilities.h"

void skip_to_int(istream& is){
  if (is.fail()) {
    is.clear();
    for (char ch; is >> ch;){
      if (isdigit(ch) || ch == '-'){
        is.unget();
        return;
      }
    }
  }
}


int main()
  try{
    string iname {"11in"};
    ifstream ift {iname};
    if (!ift) error ("Cannot open file", iname);
    int sum = 0;
    int i;
    while (true){
      if (ift >> i){
        sum += i;
      } else if (ift.eof()){
        break;
      } else {
        skip_to_int(ift);
      }
    }
    cout << "The sum of all integers is: " << sum << endl;
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