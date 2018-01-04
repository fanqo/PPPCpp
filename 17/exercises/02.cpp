#include <iostream>

using namespace std;
int main()
{
  // int: 4 bytes
  // double: 8 bytes
  // bool: 1 byte
  cout << "Int: " << sizeof(int) << " bytes" << endl;
  cout << "Double: " << sizeof(double) << " bytes" << endl;
  cout << "Bool: " << sizeof(bool) << " byte" << endl;
}
