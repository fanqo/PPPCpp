#include "../std_lib_facilities.h"
#include "../Simple_window.h"
#include "../Graph.h"

int fac(int n)   // factorial(n); n!
{
  int r = 1;
  while (n>1){
    r *= n;
    --n;
  }
  return r;
}

double term(double x, int n) {return pow(x,n)/fac(n);}   // nth term of series

double expe(double x, int n)   // sum of n terms of x
{
  double sum = 0;
  for (int i = 0; i < n; ++i) sum += term(x, i);
  return sum;
}

int expN_number_of_terms = 0;
double expN(double x)
{
  return expe(x, expN_number_of_terms);
}

int main() 
{
  constexpr int xmax = 600;   // window size
  constexpr int ymax = 400;

  constexpr int x_orig = xmax/2;   // position of (0, 0) is center of window
  constexpr int y_orig = ymax/2;
  Point orig {x_orig, y_orig};

  constexpr int r_min = -10;   // range [-10:11)
  constexpr int r_max = 11;

  constexpr int n_points = 400;   // number of points used in range

  constexpr int x_scale = 30;   // scaling factors
  constexpr int y_scale = 30;

  Simple_window win {Point{100, 100}, xmax, ymax, "Function graphing"};
  
  Function real_exp (exp, r_min, r_max, orig, 200, x_scale, y_scale);
  real_exp.set_color(Color::blue);
  win.attach(real_exp);

  constexpr int xlength = xmax-40;  // make the axis a bit smaller than the window
  constexpr int ylength = ymax-40;

  Axis x {Axis::x, Point{20,y_orig}, xlength, 
    xlength/x_scale, "one notch == 1"};
  Axis y {Axis::y, Point{x_orig, ylength+20},
    ylength, ylength/y_scale, "one notch == 1"};
  win.attach(x);
  win.attach(y);
  x.set_color(Color::red);
  y.set_color(Color::red);
  win.wait_for_button();

  for (int n = 0; n < 50; ++n) {
    ostringstream ss;
    ss << "exp approximation; n == " << n;
    win.set_label(ss.str());
    // get next approximation:
    expN_number_of_terms = n;
    Function e {expN, r_min, r_max, orig, 200, x_scale, y_scale};
    win.attach(e);
    win.wait_for_button();
    win.detach(e);
  }
  
}


