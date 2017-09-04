#include "../../std_lib_facilities.h"
#include "../../Simple_window.h"
#include "../../Graph.h"

int main()
{
  Simple_window win {Point(100, 100), 600, 400, "Simple Window"};

  Polygon poly;
  poly.add(Point{50, 50});
  poly.add(Point{250, 50});
  poly.add(Point{250, 150});
  poly.add(Point{50, 150});
  poly.set_color(Color::red);
  win.attach(poly);

  Rectangle r {Point{100, 100}, 200, 100};
  r.set_color(Color::blue);
  win.attach(r);

  win.wait_for_button();
}

