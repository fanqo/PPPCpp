#include "Name_pairs.h"

int main()
{
  Name_pairs a;
  a.read_names();
  a.read_ages();
  for(int i = 0; i < a.name().size(); ++i) {
    cout << a.name()[i] << ", " << a.age()[i] << endl;
  }
  
  Name_pairs b;
  b.read_names();
  b.read_ages();
  for(int i = 0; i < b.name().size(); ++i) {
    cout << b.name()[i] << ", " << b.age()[i] << endl;
  }
  
  cout << "a == b is: " << (a == b) << endl;
  cout << "a != b is: " << (a != b) << endl;
}
