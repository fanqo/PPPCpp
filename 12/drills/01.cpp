#include "../../std_lib_facilities.h"
#include "../../Graph.h"
#include "../../Simple_window.h"

int main()
{
  Point t1 {100,100};
  Simple_window win {t1, 600, 400, "My window"};
  
  win.wait_for_button();
}