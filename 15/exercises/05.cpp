#include "../../std_lib_facilities.h"
#include "../../Simple_window.h"
#include "../../Graph.h"

double pi4 (double) {return acos(-1)/4;}

double app(double x, int n) {
  double sum = 0;
  int sig = -1;
  for (int i = 0; i < n; ++i) {
    sig *= -1;
    sum += 1./(2*i+1)*sig;
  }
  return sum;
}

int NN = 0;
double appN(double x) {
  return app(x, NN);
}

int main()
{
  constexpr int xmax = 600;
  constexpr int ymax = 400;

  constexpr int x_orig = xmax/2;
  constexpr int y_orig = ymax/2;
  Point orig {x_orig, y_orig};

  constexpr int r_min = -10;
  constexpr int r_max = 11;

  constexpr int x_scale = 60;
  constexpr int y_scale = 60;

  Simple_window win {Point{100, 100}, xmax, ymax, "pi/4"};
  
  Function s {pi4, r_min, r_max, orig, 200, x_scale, y_scale};
  win.attach(s);
  s.set_color(Color::red);

  constexpr int xlength = xmax - 40;
  constexpr int ylength = ymax - 40;

  Axis x {Axis::x, Point{20, y_orig}, xlength,
    xlength/x_scale, "X"};
  Axis y {Axis::y, Point{x_orig, ylength+20}, ylength,
    ylength/y_scale, "Y"};
  win.attach(x);
  win.attach(y);
  x.set_color(Color::blue);
  y.set_color(Color::blue);

  win.wait_for_button();

  for (int n = 0; n < 30; ++n){
    ostringstream ss;
    ss << "pi/4 approximation; n == " << n;
    win.set_label(ss.str());
    NN = n;
    Function a {appN, r_min, r_max, orig, 200, x_scale, y_scale};
    win.attach(a);
    win.wait_for_button();
    win.detach(a);
  }
    
}
