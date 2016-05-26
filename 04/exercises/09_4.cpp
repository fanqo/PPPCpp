// 64 squares of grains
#include "../../std_lib_facilities.h"
int main()
{
  double n_square = 1;
  double n_grain = 1;
  double sum = 1;
  double pre_sum = 0;		// previous sum

  for (int i = 1; sum > pre_sum; ++i) {
    ++n_square;
    n_grain *= 2;
    pre_sum = sum;
    sum += n_grain;
  }
  cout << "The largest number of square is: " << n_square << '\n'
       << "The total number of grains is: " << pre_sum << '\n';
}
