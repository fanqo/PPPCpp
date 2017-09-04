#include "../../std_lib_facilities.h"
#include "../../Simple_window.h"
#include "../../Graph.h"

int main()
{
  Simple_window win {Point{100,100}, 600, 400, "tic-tac-toe"};
  int width {30};
  int x0 {250};
  int y0 {150};
  Rectangle r11 {Point{x0,y0}, width, width};
  r11.set_fill_color(Color::red);
  win.attach(r11);

  Rectangle r12 {Point{x0,y0+width}, width, width};
  r12.set_fill_color(Color::white);
  win.attach(r12);

  Rectangle r13 {Point{x0, y0+2*width}, width, width};
  r13.set_fill_color(Color::red);
  win.attach(r13);

  Rectangle r21 {Point{x0+width, y0}, width, width};
  r21.set_fill_color(Color::white);
  win.attach(r21);

  Rectangle r22 {Point{x0+width, y0+width}, width, width};
  r22.set_fill_color(Color::red);
  win.attach(r22);

  Rectangle r23 {Point{x0+width, y0+2*width}, width, width};
  r23.set_fill_color(Color::white);
  win.attach(r23);

  Rectangle r31 {Point{x0+2*width, y0}, width, width};
  r31.set_fill_color(Color::red);
  win.attach(r31);

  Rectangle r32 {Point{x0+2*width, y0+width}, width, width};
  r32.set_fill_color(Color::white);
  win.attach(r32);

  Rectangle r33 {Point{x0+2*width, y0+2*width}, width, width};
  r33.set_fill_color(Color::red);
  win.attach(r33);
  // ugly codes
  win.wait_for_button();
} 
