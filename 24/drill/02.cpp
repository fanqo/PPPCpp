#include "../../Matrix.h"
#include <iostream>

using namespace std;
using Numeric_lib::Matrix;

int main()
{
  Matrix<int> a(10);
  Matrix<int> b(100);
  Matrix<double> c(10);
  Matrix<int, 2> d(10,10);
  Matrix<int, 3> e(10,10,10);

  cout << "Sizes of different Matrixes: \n";
  cout << "\ta(10)"
    << "\tb(100)"
    << "\tc(10)"
    << "\td(10,10)"
    << "\te(10,10,10)"
    << '\n';

  cout << '\t' << sizeof(a)
    << '\t' << sizeof(b)
    << '\t' << sizeof(c)
    << '\t' << sizeof(d)
    << '\t' << sizeof(e)
    << '\n';
}
