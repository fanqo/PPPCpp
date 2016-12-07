#include "swaps.h"
#include "../../../std_lib_facilities.h"

int main()
{
  int x = 7;
  int y = 9;
  swap_v(x, y);
  swap_v(7, 9);

  cout << "x: " << x << ", " << "y: " << y << endl;
}
