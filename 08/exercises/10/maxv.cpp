#include "../../../std_lib_facilities.h"
#include "maxv.h"

double maxv(vector<double>& v)
{
  double max = v[0];
  for(int i = 1; i < v.size(); ++i) {
    if(max < v[i]) max = v[i];
  }
  return max;
}
