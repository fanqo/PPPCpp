#include "../../std_lib_facilities.h"

double ctok(double c)		// converts Celsius to Kelvin
{
  constexpr double C_to_K = 273.15; 
  if (c < -273.15) error("Temperature can not below -273.15 degrees Celsius");
  double k = c + C_to_K;	
  return k;			
}

int main()
{
  double c = 0;			
  cin >> c;
  double k = ctok(c);		
  cout << k << '\n'; 		
}
