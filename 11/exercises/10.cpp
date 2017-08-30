#include "../../std_lib_facilities.h"

vector<string> split(const string& s){
  istringstream iss {s};
  vector<string> vs;
  for (string ss; iss >> ss;){
    vs.push_back(ss);
  }
  return vs;
}

int main()
{
  cout << "Please enter a line: " << endl;
  string s;
  getline(cin, s);
  vector<string> vs;
  vs = split(s);
  
  cout << "Final strings are: " << endl;
  for (string x : vs){
    cout << '"' << x <<'"' << " ";
  }
  cout << endl;
}