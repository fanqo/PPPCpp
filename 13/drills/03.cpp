#include "../../std_lib_facilities.h"
#include "../../Simple_window.h"
#include "../../Graph.h"

int main()
{
  Simple_window win {Point{100, 100}, 800, 1000, "Simple_window"};
  
  int re_width = 30;
  Vector_ref<Rectangle> vr;
  for (int i = 0; i < 8; ++i){
    vr.push_back(new Rectangle{Point{i*re_width, i*re_width}, 
      re_width, re_width});
    vr[vr.size()-1].set_color(Color::red);
    win.attach(vr[vr.size()-1]);
  }
  
  win.wait_for_button();

}