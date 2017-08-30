#include "../../std_lib_facilities.h"

bool contain_word (string line, string word){
  istringstream ist {line};
  bool contain {false};
  
  for (string w; ist >> w;){
    if (w == word) contain = true;
  }
  return contain;
}


int main()
  try{
    string input_file {"02in"};
    ifstream ift {input_file};
    if(!ift) error("Cannot open file: ", input_file);
    
    string word {"test"};
    int line_num = 1;
    for (string s; getline(ift, s); ++line_num){
      if (contain_word(s, word)){
        cout << line_num << " " << s << endl;
      }
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