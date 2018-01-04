#include "iostream"

using namespace std;
void print_array10(ostream& os, int* a)
{
  for (int i = 0; i < 10; i++){
    os << "[" << i << "] == " 
      << a[i] << '\n';
  }
}

int main()
{
  int* a = new int[10] {1,2,3,4,5,6,7,8,9,0};
  print_array10(cout, a);
  delete[] a;
}
