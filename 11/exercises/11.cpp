#include "../../std_lib_facilities.h"

vector<string> split(const string& s, const string& w){
  istringstream iws {w};
  vector<char> seperators;
  for (char c; iws >> c;){
    seperators.push_back(c);
  }
 
  istringstream iss {s};
  string sl;  // s is const, need another string 
  getline(iss, sl);
  
  for (char& c : sl){
    for (char ci : seperators){
      if (c == ci) c = ' ';
    }
  }
  
  istringstream isl {sl};
  vector<string> vs;
  for (string ss; isl >> ss;)
    vs.push_back(ss);
    
  return vs;
}

int main()
{
  cout << "Please enter line: " << endl;
  
  string s;
  getline(cin, s);
  vector<string> vs;
  vs = split(s, ",-");  // use ,- for testing
  
  cout << "Final strings are: " << endl;
  for (string x : vs)
    cout << '"' << x << '"' << " ";
    
  cout << endl;
  return 0;
}