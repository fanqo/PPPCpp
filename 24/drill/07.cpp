#include "../../Matrix.h"
#include <iostream>
#include <complex>

using namespace std;
using Numeric_lib::Matrix;

int main()
{
  Matrix<complex<double>> m(10);
  cout << "Please enter 10 complexes: \n";
  
  for (int i = 0; i < m.size(); ++i)
    cin >> m(i);  // (1, 2)

  complex<double> sum;
  for (int i = 0; i < m.size(); ++i)
    sum += m(i);

  cout << "The sum of the 10 complexes is: " << sum << '\n';
}
