#include "../std_lib_facilities.h"
#include "../Simple_window.h"
#include "../Graph.h"

int main()
{
  Point t1 {100, 100};  // top left corner of our window
  
  Simple_window win {t1, 600, 400, "Canvas"};  // y-axis goes down
  
  Axis xa {Axis::x, Point{20, 300}, 280, 10, "x axis"};
  Axis ya {Axis::y, Point{20, 300}, 280, 10, "y axis"};
  ya.set_color(Color::cyan);
  ya.label.set_color(Color::dark_red);
  win.attach(xa);
  win.attach(ya);
  
  Function sine {sin, 0, 100, Point{20, 150}, 1000, 50, 50};
  win.attach(sine);
  sine.set_color(Color::blue);  // add after attach to see if it works
  
  Polygon poly;
  poly.add(Point{300,200});
  poly.add(Point{350,100});
  poly.add(Point{400,200});
  poly.set_color(Color::red);
  poly.set_style(Line_style::dash);
  win.attach(poly);
  
  Rectangle r {Point{200,200}, 100, 50};
  win.attach(r);
  
  Closed_polyline poly_rect;
  poly_rect.add(Point{100,50});
  poly_rect.add(Point{200,50});
  poly_rect.add(Point{200,100});
  poly_rect.add(Point{100,100});
  win.attach(poly_rect);
  poly_rect.add(Point{50,75});
  
  r.set_fill_color(Color::yellow);
  poly.set_style(Line_style(Line_style::dash,4));
  poly_rect.set_style(Line_style(Line_style::dash,2));
  poly_rect.set_fill_color(Color::green);
  
  Text t {Point{150, 150}, "Hello, graphical world!"};
  win.attach(t);
  t.set_font(Font::times_bold);
  t.set_font_size(20);
  
  ostringstream oss;
  oss << "screen size: " << x_max() << "*" << y_max()
      << "; window size: " << win.x_max() << "*" << win.y_max();
  Text sizes {Point{100,20}, oss.str()};
  win.attach(sizes);
  
  win.set_label("Canvas #whatever_number");
  win.wait_for_button();
}

