#include "../../Matrix.h"
#include "../../MatrixIO.h"
#include <iostream>

using namespace std;
using Numeric_lib::Matrix;

int main()
{
  Matrix<double> m(10);

  cout << "Please enter 10 floating numbers: \n";

  for (int i = 0; i < m.size(); ++i)
    cin >> m(i);

  cout << m << '\n';
}
