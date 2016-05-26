// 64 squares of grains
#include "../../std_lib_facilities.h"
int main()
{
  double n_square = 64;
  double n_grain = 1;
  double sum = 1;

  for (int i = 2; i <= n_square; ++i) {
    n_grain *= 2;
    sum += n_grain;
  }
  cout << "The total number of grains for " << n_square << " squares is: "
       << sum << '\n';
}
