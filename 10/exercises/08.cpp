#include "../../std_lib_facilities.h"

int main()
  try{
    string iname1 {"08in1"};
    ifstream ift {iname1};
    if (!ift) error("Cannot open file ", iname1);
    vector<string> content1;
    for (string s; ift >> s;){
      content1.push_back(s);
    }
    ift.close();
    
    string iname2 {"08in2"};
    ift.open(iname2, ios_base::in);
    if (!ift) error("Cannot open file ", iname2);
    vector<string> content2;
    for (string s; ift >> s;){
      content2.push_back(s);
    }
    
    vector<string> content {content1};
    for (int i = 0; i < content2.size(); ++i){
      content.push_back(content2[i]);
    }
    string oname {"08out"};
    ofstream oft {oname};
    if (!oft) error ("Cannot open file ", oname);
    for (int i = 0; i < content.size(); ++i)
      oft << content[i] << " ";
    
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