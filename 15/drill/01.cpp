#include "../../std_lib_facilities.h"
#include "../../Simple_window.h"
#include "../../Graph.h"

double one(double x) {return 1;}
double slope(double x) {return x/2;}
double square(double x) {return x*x;}
double sloping_cos(double x) {return cos(x)+slope(x);}

int main()
{
  constexpr int xmax = 600;
  constexpr int ymax = 600;
  Simple_window win {Point{100, 100}, xmax, ymax, "Function graphs"};
  win.wait_for_button();

  constexpr int x_orig = xmax/2;   // (0, 0) at the center of the window
  constexpr int y_orig = ymax/2;
  constexpr int xlength = 400;
  constexpr int ylength = 400;
  Axis x {Axis::x, Point{x_orig-xlength/2, y_orig},
    xlength, xlength/20, "1 == 20 pixels"};
  Axis y {Axis::y, Point{x_orig, y_orig+ylength/2},
    ylength, ylength/20, "1 == 20 pixels"};
  win.attach(x);
  win.attach(y);
  win.wait_for_button();

  x.set_color(Color::red);
  y.set_color(Color::red);
  win.wait_for_button();

  constexpr int r_min = -10;
  constexpr int r_max = 11;
  Point orig {x_orig, y_orig};
  constexpr int n_points = 400;
  Function s {one, r_min, r_max, orig, n_points};
  win.attach(s);
  win.wait_for_button();

  constexpr int x_scale = 20;
  constexpr int y_scale = 20;
  win.detach(s);
  Function s1 {one, r_min, r_max, orig, n_points, x_scale, y_scale};
  win.attach(s1);
  win.wait_for_button();

  Function s2 {slope, r_min, r_max, orig, n_points, x_scale, y_scale};
  win.attach(s2);
  win.wait_for_button();

  Text ts {Point{x_orig-xlength/2, 
    y_orig-static_cast<int>(slope(r_min)*y_scale)-20}, "x/2"};
  win.attach(ts);
  win.wait_for_button();

  Function s3 {square, r_min, r_max, orig, n_points, x_scale, y_scale};
  win.attach(s3);
  win.wait_for_button();

  Function s4 {cos, r_min, r_max, orig, n_points, x_scale, y_scale};
  win.attach(s4);
  win.wait_for_button();

  s4.set_color(Color::blue);
  win.wait_for_button();

  Function s5 {sloping_cos, r_min, r_max, orig, n_points, x_scale, y_scale};
  win.attach(s5);
  win.wait_for_button();
}

