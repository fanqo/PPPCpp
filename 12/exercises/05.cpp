#include "../../std_lib_facilities.h"
#include "../../Simple_window.h"
#include "../../Graph.h"

int main()
{
  int xmax = x_max();
  int ymax = y_max();
  int frame_width = 96/4; // 1 inch has 96 pixels ???
  int win_w = xmax*3/4;
  int win_h = ymax*5/6;
  Simple_window win {Point{10,10}, win_w, win_h, "Big window"};
  Rectangle r {Point{(win_w-xmax*2/3)/2, (win_h-ymax*3/4)/2},
      xmax*2/3, ymax*3/4};
  win.attach(r);
  Rectangle rf {Point{(win_w-xmax*2/3-frame_width)/2,
	(win_h-ymax*3/4-frame_width)/2}, xmax*2/3+frame_width,
	ymax*3/4+frame_width};
  rf.set_color(Color::red);
  win.attach(rf);

  win.wait_for_button();
}
