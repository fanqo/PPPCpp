// converts from Celsius to Fahrenheit and from Fahrenheit to Celsius
#include "../../std_lib_facilities.h"

double ctof (double);		// Celsius to Fahrenheit function
double ftoc (double);		// Fahrenheit to Celsius function

int main()
  try{
    cout << "Please enter temperature value followed by its unit (C for Celsius, F for Fahrenheit: \n";
    double Tin = 0;		// input temperature
    char Tu = 'a';		// temperature unit

    cin >> Tin >> Tu;
    if (Tu == 'c' || Tu == 'C') {
      double Tout = ctof(Tin);
      cout << Tin << " degrees Celsius is " << Tout << " degrees Fahrenheit.\n";
    }
    else if (Tu == 'f' || Tu == 'F') {
      double Tout = ftoc(Tin);
      cout << Tin << " degrees Fahrenheit is " << Tout << " degrees Celsius.\n";
    }
    else
      cout << "Unknown unit: " << Tu << '\n';

    return 0;
  }
  catch (exception& e) {
    cerr << "Error: " << e.what() << '\n';
  }
  catch (...) {
    cerr << "Unknown exception!\n";
  }

double ctof(double c)
{
  constexpr double zeroC = -273.15; // absolute zero degrees in Celsius
  if (c < zeroC) error("Temperature can not below -273.15 degrees Celsius");
  else {
    double f = 9.0/5*c+32;
    return f;
  }
}

double ftoc(double f)
{
  constexpr double zeroF = -273.15*9/5+32; // absolute zero degrees in Far
  if (f < zeroF) error("Temperature can not below absolute zero degrees");
  else {
    double c = (f-32)*5/9;
    return c;
  }
}
