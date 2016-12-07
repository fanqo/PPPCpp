#include "../../../std_lib_facilities.h"
#include "weight_price.h"

void init_weight_price(vector<double>& weight, vector<double>& price)
{
  weight = {1, 2, 3, 4, 5};
  price = {5.0, 4.0, 3.0, 2.0, 1.0};
}

void sum_weight_price(const vector<double>& weight, 
		      const vector<double>& price)
{
  double  sum = 0;
  for (int i = 0; i < weight.size(); ++i) {
    sum += weight[i]*price[i];
  }
  cout << "The sum of weight[i]*price[i] is: " << sum << endl;
}
