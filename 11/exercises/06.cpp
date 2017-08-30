#include "../../std_lib_facilities.h"

int main()
  try{
    ifstream ift {"06in"};    
    if(!ift) error("Cannot open file: 06in");
    bool in_qos {false};
    vector<string> lines;
    
    for (string line; getline(ift, line);){
      for (char& ch : line) {
        if (ch == '"') {
          in_qos = in_qos ? false : true;  // swap status
        } else if (!in_qos){
          switch(ch){
            case '.': case ';': case ',': case '?':
            case '-': case '\'':
              ch = ' ';
          }
        }
      }
      lines.push_back(line);
    }
    
    cout << "The input is converted to: " << endl;
    for (int i = 0; i < lines.size(); ++i){
      cout << lines[i] << endl;
    }
    
    if (in_qos) error ("Missing ending \"");
    return 0;
  }
  
  catch (exception& e){
    cerr << "Error: " << e.what() << endl;
    return 1;
  }
  
  catch (...){
    cerr << "Unknown error" << endl;
  }    