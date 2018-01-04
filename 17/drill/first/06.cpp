#include "iostream"

using namespace std;
int main()
{
  int* a = new int[11] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
  for (int i = 0; i < 11; ++i) {
    cout << "[" << i <<"] == "
      << *a << '\n';
    ++a;
  }
  // delete[] a;
}
