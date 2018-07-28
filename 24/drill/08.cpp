#include <iostream>
#include "../../Matrix.h"
#include "../../MatrixIO.h"

using namespace std;
using Numeric_lib::Matrix;

int main()
{
  cout << "Please enter 6 ints: \n";
  Matrix<int, 2> m(2,3);
  cin >> m;   // {{1 2 3} { 4 5 6}}
  cout << m;
}
