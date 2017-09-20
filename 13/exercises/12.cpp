#include "../../std_lib_facilities.h"
#include "../../Graph.h"
#include "../../Simple_window.h"

int main()
{
  Simple_window win {Point{100, 100}, 600, 400, "Test Circle"};
  Circle c {Point{200, 200}, 60};
  win.attach(c);

  const double pi {3.14159265359};
  for (int i = 0; i < 6; ++i){
    Mark m {Point{static_cast<int>(c.radius()*cos(pi/20*i)) + c.center().x,
      static_cast<int>(c.radius()*sin(pi/20*i)) + c.center().y}, 'x'};
    win.attach(m);
    win.wait_for_button();
  }
}
