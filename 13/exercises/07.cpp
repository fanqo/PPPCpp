#include "../../std_lib_facilities.h"
#include "../../Graph.h"
#include "../../Simple_window.h"

int main()
{ 
  Simple_window win {Point{100, 100}, 600, 540, "Color Chart"};
  Vector_ref<Rectangle> r;
  int w {30};   // single color area width

  for (int i = 0; i < 16; ++i){
    for (int j = 0; j < 16; ++j){
      r.push_back(new Rectangle{Point{i*w, j*w}, w, w});
      r[r.size()-1].set_fill_color(Color{i*16+j});
      r[r.size()-1].set_color(Color::invisible);
      win.attach(r[r.size()-1]);
    }
  }
  
  win.wait_for_button();
}
