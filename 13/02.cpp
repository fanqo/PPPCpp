#include "../std_lib_facilities.h"
#include "../Simple_window.h"
#include "../Graph.h"
int main()
{
  Simple_window win2{Point{100,100}, 600, 400, "One Lines"};
  Lines x;
  x.add(Point{100, 100}, Point{200,100});
  x.add(Point{150, 50}, Point{150, 150});

  win2.attach(x);
  win2.wait_for_button();
}
