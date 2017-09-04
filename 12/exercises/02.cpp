#include "../../std_lib_facilities.h"
#include "../../Simple_window.h"
#include "../../Graph.h"

int main()
{
  Simple_window win {Point{100, 100}, 600, 400, "Simple Window"};
  
  Rectangle r {Point{50, 50}, 100, 30};
  win.attach(r);

  ostringstream oss;
  oss << "Howdy!";

  Text t {Point{70,70}, oss.str()};
  win.attach(t);

  win.wait_for_button();
}
