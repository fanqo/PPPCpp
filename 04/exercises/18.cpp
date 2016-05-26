// solve quadratic equation
#include "../../std_lib_facilities.h"
int main()
{
  cout << "Quadratic equations have the form: A*x^2 + B*x + C = 0 \n"
       << "Please enter A, B and C: \n";
  double a = 0;
  double b = 0;
  double c = 0;
  double x1 = 0;
  double x2 = 0;

  cin >> a >> b >> c;
  
  double delta = b*b-4*a*c;	       
  if (delta < 0 || a == 0)
    cout << "Please check to make sure a != 0, b*b-4*a*c >= 0 \n";
  else
    x2 = (-b-sqrt(delta))/(2*a);

  x1 = c/x2;

  cout << "Quadratic equation: " << a << "*x^2 + " << b << "*x + " << c
       << " = 0 has solutions, " << x1 << " and " << x2 << '\n';

  return 0;
}
