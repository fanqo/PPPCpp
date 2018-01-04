#include "iostream"

using namespace std;
int main()
{
  int* a = new int[10] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
  for (int i = 0; i < 10; i++) {
    cout << "[" << i << "] == "
      << a[i] << '\n';
  }
  delete[] a;
}
    
