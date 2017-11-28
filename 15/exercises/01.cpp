#include "../../std_lib_facilities.h"

int facr(int n) {return n>1 ? n*facr(n-1) : 1; } // recursive factorial n!

int faci(int n) { // iterative factorial
  int r = 1;
  while (n > 1){
    r *= n;
    --n;
  }
  return r;
}

int main()
{
  cout << "Recursive factorial: " << endl;
  for(int i = 0; i < 21; ++i){
    cout << i << "! : " << facr(i) << ", ";
  }
  cout << endl;

  cout << "Iterative factorial: " << endl;
  for(int i = 0; i < 21; ++i){
    cout << i << "! : " << faci(i) << ", ";
  }
  cout << endl;
}
