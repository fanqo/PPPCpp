#include "../../std_lib_facilities.h"

void disemvowels (string& line){
  for(char& x: line){
    switch(x){
      case 'a': case 'e': case 'i': case 'o': case 'u':
      case 'A': case 'E': case 'I': case 'O': case 'U':
        x = 0;
    }
  }
}

int main()
  try{
    ifstream ift {"03in"};
    if(!ift) error("Cannot open file: 03in");
    
    vector<string> lines;
    for (string s; getline(ift, s);){
      disemvowels(s);
      lines.push_back(s);
    }
    
    for (int i = 0; i < lines.size(); ++i){
      cout << lines[i] << endl;
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