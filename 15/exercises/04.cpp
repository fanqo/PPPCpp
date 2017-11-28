#include "../../std_lib_facilities.h"
#include "../../Simple_window.h"
#include "../../Graph.h"

double sc(double x) {return sin(x)+cos(x);}
double scsq(double x) {return sin(x)*sin(x)+cos(x)*cos(x);}

int main()
  try{
    constexpr int xmax = 600;
    constexpr int ymax = 400;

    constexpr int x_orig = xmax/2;
    constexpr int y_orig = ymax/2;
    Point orig {x_orig, y_orig};

    constexpr int r_min = -10;
    constexpr int r_max = 11;

    constexpr int n_points = 400;

    constexpr int x_scale = 30;
    constexpr int y_scale = 30;

    Simple_window win {Point{100, 100}, xmax, ymax, "Functions"};

    constexpr int xlength = xmax-40;
    constexpr int ylength = ymax-40;

    Axis x {Axis::x, Point{20, y_orig}, xlength,
      xlength/x_scale, "X"};
    Axis y {Axis::y, Point{x_orig, ylength+20}, ylength,
      ylength/y_scale, "Y"};

    win.attach(x);
    win.attach(y);

    Function s {sin, r_min, r_max, orig, n_points, x_scale, y_scale};
    Function s2 {cos, r_min, r_max, orig, n_points, x_scale, y_scale};
    Function s3 {sc, r_min, r_max, orig, n_points, x_scale, y_scale};
    Function s4 {scsq, r_min, r_max, orig, n_points, x_scale, y_scale};

    win.attach(s);
    s.set_color(Color::red);
    win.attach(s2);
    s2.set_color(Color::green);
    win.attach(s3);
    s3.set_color(Color::blue);
    win.attach(s4);
    win.wait_for_button();
  }
catch (exception& e) {
  cerr << "Exception: " << e.what() << endl;
  return 1;
}
catch (...) {
  cerr << "Unknown error" << endl;
  return 2;
}


