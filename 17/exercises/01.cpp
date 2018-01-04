#include <iostream>

using namespace std;
int main()
{
  int* pi = new int {0};
  double* pd = new double {1.0};

  cout << "Pointer to integer: " << pi << endl;
  cout << "Pointer to double: " << pd << endl;
}
