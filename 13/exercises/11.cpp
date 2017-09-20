#include "../../std_lib_facilities.h"
#include "../../Simple_window.h"
#include "../../Graph.h"

int main()
{
  Simple_window win {Point{100, 100}, 800, 600, "Test mark"};

  Point c {200, 450};
  Ellipse e {c, 150, 100};
  win.attach(e);

  Axis x {Axis::x, c, 400, 10, "x axis"};
  win.attach(x);

  Axis y {Axis::y, c, 300, 10, "y axis"};
  win.attach(y);

  Mark f1 {e.focus1(), 'x'};
  win.attach(f1);

  Mark f2 {e.focus2(), 'x'};
  win.attach(f2);

  const double pi {3.14159265359};
  int x1 = static_cast<int>(e.major()*cos(pi/6));
  int y1 = -static_cast<int>(e.minor()*sin(pi/6));
  Point p1 {Point{e.center().x + x1, e.center().y + y1}};
  Mark p {p1, 'x'};
  win.attach(p);

  Line l1 {e.focus1(), p1};
  Line l2 {e.focus2(), p1};
  win.attach(l1);
  win.attach(l2);

  win.wait_for_button();
}

