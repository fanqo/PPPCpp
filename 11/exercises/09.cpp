#include "../../std_lib_facilities.h"

int main()
  try{
  ifstream ift {"09in"}; // ordinary text contains integers
  if (!ift) error("Cannot open file: 09in");
  vector<int> ints;
  for (int i; ift >> i;){
    ints.push_back(i);
  }
  cout << "Original integers are: " << endl;
  for (int i : ints) {
    cout << i << '\t';
  }
  cout << endl;
  
  ofstream obin {"09bin", ios_base::binary};  // output binary file
  if (!obin) error("Cannot open file: 09bin");
  for (int i : ints) {
    obin.write(as_bytes(i), sizeof(int));
  }
  obin.close();  // close 09bin for reading in
  
  ifstream ibin {"09bin", ios_base::binary}; // read from binary file
  if (!ibin) error("Cannot open file: 09bin");
  vector<int> intbins;
  for (int i; ibin.read(as_bytes(i), sizeof(int));) {
    intbins.push_back(i);
  }
  
  cout << "Final integers are: " << endl;
  for (int i : intbins) {
    cout<< i << '\t';
  }
  cout << endl;
  
  return 0;
  }
  
  catch (exception& e){
    cerr << "Error: " << e.what() << endl;
    return 1;
  }
  
  catch (...){
    cerr << "Unknown error" << endl;
  }    