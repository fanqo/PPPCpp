#include "../../std_lib_facilities.h"

double ctok(double c)		// converts Celsius to Kelvin
{
  constexpr double C_to_K = 273.15; 
  if (c < -273.15) error("Temperature can not below -273.15 degrees Celsius");
  double k = c + C_to_K;	
  return k;			
}

double ktoc(double k)		// converts Kelvin to Celsius
{
  constexpr double K_to_C = -273.15;
  if (k < 0) error ("Temperature can not below 0 degrees Kelvin");
  double c = k + K_to_C;
  return c;
}

int main()
  try{
    cout << "Please enter temperature, followed by its unit (C for Celsius, K for Kelvin)" << '\n';
    double i = 0;
    char u = 'a';
    cin >> i >> u;
    if (u == 'C') {
      double d = ctok(i);
      cout << i << "C is " << d << "K\n";
    }
    else if (u == 'K') {
      double d = ktoc(i);
      cout << i << "K is " << d << "C\n";
    }
    else
      cout << "Unknown unit: " << u << ", please check" << '\n';
    
    return 0;
  }
  catch (exception& e) {
    cerr << "Error: " << e.what() << '\n';
  }
  catch (...) {
    cerr << "Unknown exception happend!\n";
  }
