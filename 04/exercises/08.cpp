//
#include "../../std_lib_facilities.h"

void print_n_square(int);

int main()
{
  cout << "For 1000 grains: \n";
  print_n_square(1000);
  cout << '\n';
  
  cout << "For 1000000 grains: \n";
  print_n_square(1000000);
  cout << '\n';

  cout << "For 1000000000 grains: \n";
  print_n_square(1000000000);
  cout << '\n';
  return 0;
}


void print_n_square(int i)
{
  int n_square = 1;		// the square number
  int n_grains = 1;		// how many grains on the currrent square
  int sum = 1;			// total grains

  for (n_square = 2; sum < i; ++n_square) {
    n_grains *= 2;
    sum += n_grains;
  }
  cout << "The needed square number is: " << n_square-1 << '\n'
       << "The number of grains on the current square are: " << n_grains << '\n'
       << "The total grains are: " << sum << '\n';
  // before test sum, n_square increments, so the current square number needs minus 1
}
