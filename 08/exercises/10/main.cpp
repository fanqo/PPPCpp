#include "../../../std_lib_facilities.h"
#include "maxv.h"

int main()
{
  vector<double> vv {1, 5, 3, 9, 7, 2};
  double max = vv[0];
  max = maxv(vv);
  cout << "The maximum value is: " << max << endl;
}
