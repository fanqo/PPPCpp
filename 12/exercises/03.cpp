#include "../../std_lib_facilities.h"
#include "../../Simple_window.h"
#include "../../Graph.h"

int main()
{
  Simple_window win {Point{100, 100}, 600, 400, "Initials"};
  Text i1 {Point{60, 200}, "F"};
  i1.set_font_size(150);
  i1.set_color(Color::red);
  win.attach(i1);
  
  Text i2 {Point{420, 200}, "Q"};
  i2.set_font_size(150);
  i2.set_color(Color::blue);
  win.attach(i2);
  
  win.wait_for_button();
}
