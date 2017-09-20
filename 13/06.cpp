#include "../std_lib_facilities.h"
#include "../Simple_window.h"
#include "../Graph.h"
int main()
{
  Simple_window win7{Point{100,100}, 600, 400, "Rectangles"};
 
  Rectangle r00 {Point{150, 100}, 200, 100};
  Rectangle r11 {Point{50, 50}, Point{250, 150}};
  Rectangle r12 {Point{50, 150}, Point{250, 250}};
  Rectangle r21 {Point{250, 50}, 200, 100};
  Rectangle r22 {Point{250, 150}, 200, 100};
  
  r00.set_fill_color(Color::yellow);
  r11.set_fill_color(Color::blue);
  r12.set_fill_color(Color::red);
  r21.set_fill_color(Color::green);
 
  r11.move(400,0);
  r11.set_fill_color(Color::white);
 
  win7.attach(r00);
  win7.attach(r11);
  win7.attach(r12);
  win7.attach(r21);
  win7.attach(r22);
  
  win7.put_on_top(r00);
  
  r00.set_color(Color::invisible);
  r11.set_color(Color::invisible);
  r12.set_color(Color::invisible);
  r21.set_color(Color::invisible);
  r22.set_color(Color::invisible);
  
  win7.wait_for_button();
}
