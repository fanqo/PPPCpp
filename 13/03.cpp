#include "../std_lib_facilities.h"
#include "../Simple_window.h"
#include "../Graph.h"
int main()
{
  Simple_window win3{Point{100,100}, 600, 400, "One Lines"};
  int x_size = win3.x_max();
  int y_size = win3.y_max();
  int x_grid = 30;
  int y_grid = 20;
  Lines grid;
  for (int x = x_grid; x < x_size; x += x_grid)
    grid.add(Point{x, 0}, Point{x, y_size});
    
  for (int y = y_grid; y < y_size; y += y_grid)
    grid.add(Point{0, y}, Point{x_size, y});
  
  grid.set_color(Color::red);
  grid.set_style(Line_style{Line_style::dash,2});
  
  win3.attach(grid);
  win3.wait_for_button();
}
