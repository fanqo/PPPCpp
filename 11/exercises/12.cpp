#include "../../std_lib_facilities.h"

vector<char> string_to_chars(string s){
  vector<char> vc;
  for (char ch : s){
    vc.push_back(ch);
  }
  return vc;
}

void revert_chars(vector<char> vc){
  int vc_size = vc.size();
  for (int i = 0; i < vc_size; ++i) {
    cout << vc[vc_size-1-i];
  }
}

int main()
{
  ifstream ift {"12in"};
  if (!ift) error("Cannot open file: 12in");
  
  vector<string> vs;
  for (string s; getline(ift, s);){
    vs.push_back(s);
  }

  int vs_size = vs.size();
  for (int i = 0; i < vs_size; ++i){
    vector<char> vc = string_to_chars(vs[vs_size-1-i]);  // reverse line order
    revert_chars(vc); 
    cout << endl;
  }
}