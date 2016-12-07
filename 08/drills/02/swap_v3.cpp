#include "swaps.h"
#include "../../../std_lib_facilities.h"

int main()
{
  double dx = 7.7;
  double dy = 9.9;
  swap_v(dx, dy);
  swap_v(7.7, 9.9);

  cout << "dx: " << dx << ", " << "dy: " << dy << endl;
}
