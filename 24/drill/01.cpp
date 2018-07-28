#include <iostream>

using namespace std;

int main()
{
  cout << "Sizes of different types: \n";
  cout << "\tchar" 
    << "\tshort" 
    << "\tint"
    << "\tlong"
    << "\tfloat" 
    << "\tdouble" 
    << "\tint*"
    << "\tdouble*" 
    << '\n';

  cout << '\t' << sizeof(char) 
    << '\t' << sizeof(short)
    << '\t' << sizeof(int)
    << '\t' << sizeof(long)
    << '\t' << sizeof(float)
    << '\t' << sizeof(double)
    << '\t' << sizeof(int*)
    << '\t' << sizeof(double*)
    << '\n';
}
