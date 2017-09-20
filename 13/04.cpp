#include "../std_lib_facilities.h"
#include "../Simple_window.h"
#include "../Graph.h"
int main()
{
  Simple_window win4{Point{100,100}, 600, 400, "Open Polyline"};
 
  Open_polyline opl = {
    {100, 100}, {150, 200}, {250, 250}, {300, 200},
  };
  
  win4.attach(opl);
  win4.wait_for_button();
}
