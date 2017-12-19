#include "../../std_lib_facilities.h"
#include "../../Simple_window.h"
#include "../../Graph.h"

struct My_window: Simple_window {
  My_window(Point xy, int w, int h, const string& title);
private:
  Button next_button;
  Button quit_button;
  Menu menu;
  Button menu_button;
  In_box x_co;
  In_box y_co;

  void next();
  void quit();
  void menu_pressed() {menu_button.hide(); menu.show();}
  void hide_menu() {menu.hide(); menu_button.show();}
  static void cb_menu(Address, Address);
  static void cb_circle(Address, Address);
  static void cb_square(Address, Address);
  static void cb_triangle(Address, Address);
  static void cb_hexagon(Address, Address);
  void circle_pressed();
  void square_pressed();
  void get_orig();

  int x_orig;
  int y_orig;

};

My_window::My_window(Point xy, int w, int h, const string& title)
  : Simple_window{xy, w, h, title},
  next_button{Point{x_max() - 150, 0}, 70, 20, "Next", 
    [](Address, Address pw) {reference_to<My_window>(pw).next();}},
  quit_button{Point{x_max() - 70, 0}, 70, 20, "Quit",
    [](Address, Address pw) {reference_to<My_window>(pw).quit();}},
  menu{Point{x_max() - 70, 30}, 70, 20, Menu::vertical, "Menu"},
  menu_button{Point{x_max() - 80, 30}, 80, 20, "Menu", cb_menu},
  x_co{Point{x_max() - 310, 0}, 50, 20, "X:"},
  y_co{Point{x_max() - 210, 0}, 50, 20, "Y:"}
{
  attach(next_button);
  attach(quit_button);
  attach(x_co);
  attach(y_co);
  menu.attach(new Button {Point{0, 0}, 0, 0, "Circle", cb_circle});
  menu.attach(new Button {Point{0, 0}, 0, 0, "Square", cb_square});
  attach(menu); // must after menu.attach, or segmentation fault: 11
  menu.hide(); // must after attach(menu)
  attach(menu_button);
}

void My_window::quit()
{
  hide();
}

void My_window::next()
{
  redraw();
}

void My_window::cb_menu(Address, Address pw)
{
  reference_to<My_window>(pw).menu_pressed();
}

void My_window::cb_circle(Address, Address pw)
{
  reference_to<My_window>(pw).circle_pressed();
}

void My_window::cb_square(Address, Address pw)
{
  reference_to<My_window>(pw).square_pressed();
}

void My_window::get_orig()
{
  x_orig = x_co.get_int();
  y_orig = y_co.get_int();
  if (x_orig < 0 || y_orig < 0) {
    x_orig = 100;
    y_orig = 100;
  }
}

void My_window::circle_pressed()
{
  get_orig();
  Circle c1 {Point{x_orig, y_orig}, 100};
  attach(c1); // *** DO NOT WORK
  hide_menu();
}

void My_window::square_pressed()
{
  hide_menu();
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


