#include <iostream>

using namespace std;
int main()
{
  char* pc = new char {'c'};
  double* pd = new double {0.0};
  int* pi = new int {0};

  cout << "First Pointer: " << pc << endl;  // print out 'c', wierd
  cout << "First Pointer: " << (void*) pc << endl;
  cout << "Second Pointer: " << pd << endl;
  cout << "Third Pointer: " << pi << endl;
  delete pc;
  delete pd;
  delete pi;

  pc = new char {'n'};
  pd = new double {1.0};
  pi = new int {1};
  cout << "After delete: " << endl;
  cout << pc << endl;
  cout << (void*) pc << endl;
  cout << pd << endl;
  cout << pi << endl;
  delete pc;
  delete pd;
  delete pi;
}
