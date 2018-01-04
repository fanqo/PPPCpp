#include "iostream"

using namespace std;
void print_array(ostream& os, int* a, int n)
{
  for (int i = 0; i < n; i++){
    os << "[" << i <<"] == " 
      << a[i] << endl;
  }
}

int main()
{
  int* p1 = new int[10] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
  int* p2 = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

  cout << "Before copy" << endl;
  cout << "p1: " << endl;
  print_array(cout, p1, 10);
  cout << "p2: " << endl;
  print_array(cout, p2, 10);

  p2 = p1;
  cout << "After copy" << endl;
  cout << "p1: " << endl;
  print_array(cout, p1, 10);
  cout << "p2: " << endl;
  print_array(cout, p2, 10);

  delete[] p1;
  // delete[] p2; // has been deleted by delete[] p1;
}
