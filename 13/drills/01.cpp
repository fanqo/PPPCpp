#include "../../std_lib_facilities.h"
#include "../../Simple_window.h"
#include "../../Graph.h"

int main()
{
  Simple_window win {Point{100, 100}, 800, 1000, "Simple_window"};
  
  win.wait_for_button();

}