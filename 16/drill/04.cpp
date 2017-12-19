#include "../../Graph.h"
#include "../../Simple_window.h"

struct Lines_window : Graph_lib::Window {
  Lines_window (Point xy, int w, int h, const string& title);
  Open_polyline lines;
  Menu color_menu;
  Menu style_menu;
  Button menu_button;
  Button smenu_button;

  static void cb_red(Address, Address);  // callback for red button
  static void cb_blue(Address, Address);
  static void cb_black(Address, Address);
  static void cb_menu(Address, Address);
  static void cb_style(Address, Address);
  static void cb_dash(Address, Address);
  static void cb_dot(Address, Address);
  static void cb_solid(Address, Address);

  // the actions:
  void hide_menu(){ color_menu.hide(); menu_button.show(); }
  void red_pressed() { change(Color::red); hide_menu(); }
  void blue_pressed() { change(Color::blue); hide_menu(); }
  void black_pressed() { change(Color::black); hide_menu(); }
  void change(Color c) { lines.set_color(c); }
  void dash_pressed() { lines.set_style(Line_style::dash); shide_menu(); }
  void dot_pressed() { lines.set_style(Line_style::dot); shide_menu(); }
  void solid_pressed() { lines.set_style(Line_style::solid); shide_menu(); }
  void shide_menu() { style_menu.hide(); smenu_button.show(); }
  void menu_pressed() {menu_button.hide(); color_menu.show(); }
  void smenu_pressed() { smenu_button.hide(); style_menu.show(); }
private:
  Button next_button;  // add (next_x, next_y) to lines
  Button quit_button;
  In_box next_x;
  In_box next_y;
  Out_box xy_out;

  void next();
  void quit();
};

void Lines_window::cb_red(Address, Address pw) {
  reference_to<Lines_window>(pw).red_pressed();
}

void Lines_window::cb_blue(Address, Address pw) {
  reference_to<Lines_window>(pw).blue_pressed();
}

void Lines_window::cb_black(Address, Address pw) {
  reference_to<Lines_window>(pw).black_pressed();
}

void Lines_window::cb_menu(Address, Address pw) {
  reference_to<Lines_window>(pw).menu_pressed();
}

void Lines_window::cb_style(Address, Address pw) {
  reference_to<Lines_window>(pw).smenu_pressed();
}

void Lines_window::cb_dash(Address, Address pw) {
  reference_to<Lines_window>(pw).dash_pressed();
}

void Lines_window::cb_dot(Address, Address pw) {
  reference_to<Lines_window>(pw).dot_pressed();
}

void Lines_window::cb_solid(Address, Address pw) {
  reference_to<Lines_window>(pw).solid_pressed();
}

Lines_window::Lines_window(Point xy, int w, int h, const string& title)
  : Graph_lib::Window{xy, w, h, title},
  next_button{Point{x_max() - 150, 0}, 70, 20, "Next point",
    [](Address, Address pw) {reference_to<Lines_window>(pw).next();}},
  quit_button{Point{x_max()-70, 0}, 70, 20, "Quit",
    [](Address, Address pw){reference_to<Lines_window>(pw).quit();}},
  next_x{Point{x_max()-310, 0}, 50, 20, "next x:"},
  next_y{Point{x_max()-210, 0}, 50, 20, "next y:"},
  xy_out{Point{100, 0}, 100, 20, "current (x, y):"},
  color_menu{Point{x_max()-70, 40}, 70, 20, Menu::vertical, "color"},
  menu_button{Point{x_max()-80, 30}, 80, 20, "color menu", cb_menu},
  style_menu{Point{x_max()-70, 110}, 70, 20, Menu::vertical, "style"},
  smenu_button{Point{x_max()-80, 100}, 80, 20, "style menu", cb_style}
{
  attach(next_button);
  attach(quit_button);
  attach(next_x);
  attach(next_y);
  attach(xy_out);
  attach(lines);
  color_menu.attach(new Button{Point{0,0}, 0, 0, "red", cb_red});
  color_menu.attach(new Button{Point{0,0}, 0, 0, "blue", cb_blue});
  color_menu.attach(new Button{Point{0,0}, 0, 0, "black", cb_black});
  attach(color_menu);
  color_menu.hide();
  attach(menu_button);
  style_menu.attach(new Button{Point{0,0}, 0, 0, "dash", cb_dash});
  style_menu.attach(new Button{Point{0,0}, 0, 0, "dot", cb_dot});
  style_menu.attach(new Button{Point{0,0}, 0, 0, "solid", cb_solid});
  attach(style_menu);
  style_menu.hide();
  attach(smenu_button);
}

void Lines_window::quit()
{
  hide();
}

void Lines_window::next()
{
  int x = next_x.get_int();
  int y = next_y.get_int();
  lines.add(Point{x, y});
  // update current position readout:
  ostringstream ss;
  ss << '(' << x << ',' << y << ')';
  xy_out.put(ss.str());

  redraw();
}

int main()
  try{
    Lines_window win {Point{100, 100}, 600, 400, "lines"};
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

