#include "../../../std_lib_facilities.h"
#include "stat_values.h"

stat_value_c stat_values(vector<double>& v)
{
  stat_value_c sv;
  sv.max = v[0];
  sv.min = v[0];
  
  double sum = 0;
  for (int i = 0; i < v.size(); ++i) {
    if(sv.max < v[i]) sv.max = v[i];
    if(sv.min > v[i]) sv.min = v[i];
    sum += v[i];
  }
  sv.mean = sum/v.size();
  
  sv.median = v[0];
  for(int i = 1; i < v.size(); ++i) {
    if(abs(sv.median - sv.mean) > abs(v[i] - sv.mean))
      sv.median = v[i];
  }

  return sv;
}
