#include "../../std_lib_facilities.h"
#include "../../Simple_window.h"
#include "../../Graph.h"

struct My_window: Simple_window {
  My_window(Point xy, int w, int h, const string& title);
private:
  Button next_button;
  Button quit_button;

  void next();
  void quit();
};

My_window::My_window(Point xy, int w, int h, const string& title)
  : Simple_window{xy, w, h, title},
  next_button{Point{x_max() - 150, 0}, 70, 20, "Next", 
    [](Address, Address pw) {reference_to<My_window>(pw).next();}},
  quit_button{Point{x_max() - 70, 0}, 70, 20, "Quit",
    [](Address, Address pw) {reference_to<My_window>(pw).quit();}}
{
  attach(next_button);
  attach(quit_button);
}

void My_window::quit()
{
  hide();
}

void My_window::next()
{
  redraw();
}

int main()
  try{
    My_window win {Point{100, 100}, 600, 400, "My window"};
    return gui_main();
  }

catch (exception& e) {
  cerr << "exception: " << e.what() << endl;
  return 1;
}
catch (...) {
  cerr << "Some exception\n";
  return 2;
}


