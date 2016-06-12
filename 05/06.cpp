// Logic errors test
#include "../std_lib_facilities.h"
int main()
{
  vector<double> temps;		// temperatures
  for (double temp; cin >> temp;) // read and put into temps
    temps.push_back(temp);

  if (temps.size() > 0) {
    double sum = 0;
    double high_temp = temps[0];	// give initial value using user input
    double low_temp = temps[0];
  
    for (double x: temps)
      {
	if (x > high_temp) high_temp = x; // find high 
	if (x < low_temp) low_temp = x;	// find low 
	sum += x;				// compute sum
      }
  
    cout << "High temperature: " << high_temp << '\n';
    cout << "Low temperature: " << low_temp << '\n';
    cout << "Average temperature: " << sum/temps.size() << '\n';
  }
  else
    cout << "Please enter at least one temperature\n";

  return 0;
  
}
