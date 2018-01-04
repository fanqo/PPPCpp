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
  print_array(cout, p1, 1);
}
