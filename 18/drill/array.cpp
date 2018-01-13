#include <iostream>

using namespace std;
int ga[10] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(const int a[], int n)
{
  int la[10];

  for (int i = 0; i < 10; i++) {
    la[i] = ga[i];
  }
  
  for (int i = 0; i < 10; i++) {
    cout << la[i] << " ";
  }
  cout << '\n';

  int* p = new int[n];
  for (int i = 0; i < n; i++) {
    p[i] = a[i];
  }

  for (int i = 0; i < n; i++) {
    cout << p[i] << " ";
  }
  cout << '\n';

  delete[] p;
}

int main()
{
  f(ga, 10);

  int aa[10];
  aa[0] = 1;
  for (int i = 1; i < 10; ++i) {
    aa[i] = aa[i-1]*(i+1);
  }

  f(aa, 10);
}
