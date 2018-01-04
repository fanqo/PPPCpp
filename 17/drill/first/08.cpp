#include "iostream"

using namespace std;
int main()
{
  int* a = new int[20] {101, 102, 103, 104, 105, 106, 107, 108,
    109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120};
  for (int i = 0; i < 20; i++){
    cout << "[" << i << "] == "
      << a[i] << endl;
  }
  delete [] a;
}
