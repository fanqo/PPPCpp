// compute mean and median temperatures
#include "../../std_lib_facilities.h"

double median(vector<double>);

int main()
{
  vector<double> temps;

  cout << "Please enter temperatures: \n";
  for (double temp; cin >> temp;)
    temps.push_back(temp);
  
  double sum = 0;
  for (double x : temps) sum += x;
  cout << "Average temperature: " << sum/temps.size() << '\n';
  
  cout << "Median temperature: " << median(temps) << '\n';

  return 0;
}

double median(vector<double> v)
{
  sort(v);
  int v_size = 0;
  v_size = v.size();

  double m = 0;
  if ((v_size%2) == 0)
    m = (v[v_size/2]+v[v_size/2-1])/2;
  else
    m = v[v_size/2];

  return m;
}
