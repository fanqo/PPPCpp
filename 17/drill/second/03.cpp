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
  int a = 7;
  int* p1 = &a;

  int b[7] {1, 2, 4, 8, 16, 32, 64};
  int* p2 = b;
  print_array(cout, p2, 7);
}
