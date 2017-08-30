#include "../../std_lib_facilities.h"

void stolower (string& s) {
  for (char& x: s) x = tolower(x);
}

int main()
  try{
    string input_file {"01in"};
    ifstream ift {input_file};
    if(!ift) error("Cannot open file: ", input_file);

    vector<string> lines;
    for (string s; getline(ift, s);){
      stolower(s);
      lines.push_back(s);
    }
    
    
    string output_file {"01out"};
    ofstream oft {output_file};
    if(!oft) error("Cannot open file: ", output_file);
    for (int i = 0; i < lines.size(); ++i){
      oft << lines[i] << endl;
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