#include "../../std_lib_facilities.h"
#include "../../Simple_window.h"
#include "../../Graph.h"

int main()
{
  Simple_window win {Point{100, 100}, 800, 1000, "Simple_window"};
  
  int grid_width = 100;
  Lines grid;
  for (int i = 0; i < 8; ++i)
    grid.add(Point{i*grid_width, 0}, Point{i*grid_width, 800});
    
  for (int i = 0; i < 8; ++i)
    grid.add(Point{0, i*grid_width}, Point{800, i*grid_width});
    
  win.attach(grid);
  
  win.wait_for_button();

}