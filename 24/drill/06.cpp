#include "../../Matrix.h"
#include <iostream>

using namespace std;
using Numeric_lib::Matrix;

int main()
{
  cout << "Please enter m and n: \n";
  int m, n;
  cin >> m >> n;

  Matrix<int,2> ma(m, n);
  cout << "Multiplication table for [0," << n 
    << ")*[0," << m << "): \n";

  for (int i = 0; i < m; ++i) {
    cout << '\t' << i;
  }
  cout << '\n';

  for (int i = 0; i < n; ++i) {
    cout << i;
    for (int j = 0; j < m; ++j) {
      cout << '\t' << i*j;
    }
    cout << '\n';
  }
}
      


