// solve quadratic equations
// quadratic equations are of the form a*x*x+b*x+c=0
#include "../../std_lib_facilities.h"

int quad_solve(double, double, double); // quadratic equation solver

int main()
  try{
    cout << "Quadratic equations are of the form: a*x*x + b*x + c = 0\n"
	 << "Please enter a, b and c, the roots of the equation can be found.\n";
    double a = 0;
    double b = 0;
    double c = 0;
    cin >> a >> b >> c;
    quad_solve(a, b, c);

    return 0;
  }
  catch (exception& e) {
    cerr << "Error: " << e.what() << '\n';
  }
  catch (...) {
    cerr << "Unknown exception.\n";
  }

int quad_solve(double a, double b, double c)
{
    double del = b*b-4*a*c;
    double x1 = 0;
    double x2 = 0;
    if (a == 0)			
      error("This is not a quadratic equation.");
    else if (del < 0)		// del < 0, equation has complex roots
      error("The equaion has no real roots.");
    else if (del == 0) {	// del == 0, equation has two same roots
      x1 = -b/(2.0*a);
      x2 = x1;
    }
    else {
      x2 = (-b-sqrt(del))/(2*a);
      x1 = c/x2;
    }
    
    cout << "The root of equation: "
	 << a << "*x*x + "
	 << b << "*x + "
	 << c << " = 0 are: "
	 << x1 << ' ' << x2 << '\n';

    return 0;
}
	    
