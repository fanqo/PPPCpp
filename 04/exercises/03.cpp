// distance between cities
#include "../../std_lib_facilities.h"
int main()
{
  cout << "Please enter the distances: \n";
  
  vector<double> distances;
  for (double distance; cin >> distance;)
    distances.push_back(distance);

  double sum = 0;
  for (double x : distances) sum += x;
  cout << "The sum of all distances is: " << sum << '\n';

  double smallest = distances[0];
  double greatest = distances[0];
  for (double x : distances)  {
    if (smallest > x) smallest = x;
    if (greatest < x) greatest = x;
  }
  cout << "The smallest distance is: " << smallest << '\n';
  cout << "The greatest distance is: " << greatest << '\n';

  return 0;
}
