#include "../../../std_lib_facilities.h"
#include "stat_values.h"

int main()
{
  vector<double> v{3.0, 5, 2, 7, 9, 6};
  stat_value_c sc;
  
  sc = stat_values(v);
  
  cout << "max: " << sc.max << '\t' 
       << "min: " << sc.min << '\t'
       << "mean: " << sc.mean << '\t'
       << "median: " << sc.median << endl;
}
