#include "iostream"

using namespace std;

void print_array(ostream& os, int* a, int n)
{
  for (int i = 0; i < n; ++i) {
    os << "[" << i << "] == "
      << a[i] << '\n';
  }
}

int main()
{
  int* a = new int[3] {1, 2, 3};
  int* b = new int[6] {4, 5, 6, 7, 8, 9};

  cout << "For array a: " << endl;
  print_array(cout, a, 3);
  cout << "For array b: " << endl;
  print_array(cout, b, 6);
  delete[] a;
  delete[] b;
}
