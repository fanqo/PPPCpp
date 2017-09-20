#include "../std_lib_facilities.h"
#include "../Simple_window.h"
#include "../Graph.h"
int main()
{
  Simple_window win6{Point{100,100}, 600, 400, "Polygon"};
 
//   Polygon poly = {
//     {100, 100}, {150, 200}, {250, 250}, {300, 200},
//   };
  Polygon poly;
  poly.add({100, 100});
  poly.add({150, 200});
  poly.add({250, 250});
  poly.add({300, 200});
  
  win6.attach(poly);
  win6.wait_for_button();
}
