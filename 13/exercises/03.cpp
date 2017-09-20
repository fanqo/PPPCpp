#include "../../std_lib_facilities.h"
#include "../../Graph.h"
#include "../../Simple_window.h"

struct Arrow : Shape {
  Arrow(Point p1, Point p2, int aheight=5, double aangle=10);
  void draw_lines() const;
private:
  Point p1, p2;
  int aheight;
  double aangle;
};

Arrow::Arrow(Point pp1, Point pp2, int ah, double aa)
  : p1{pp1}, p2{pp2}, aheight{ah}, aangle{aa}
{
  add(p1);
  add(p2);
}

void Arrow::draw_lines() const {
  double pi = 3.14159265359;
  double langle;
  if (p1.x == p2.x) {
    langle = 0;
  } else {
    langle = 1.0*atan2((p2.y-p1.y), (p2.x-p1.x));
  }
  double la1 = langle + pi - aangle*pi/180/2;
  double la2 = langle + pi + aangle*pi/180/2;
  fl_line(p1.x, p1.y, p2.x, p2.y);
  fl_line(p2.x, p2.y, p2.x+aheight*cos(la1), p2.y+aheight*sin(la1));
  fl_line(p2.x, p2.y, p2.x+aheight*cos(la2), p2.y+aheight*sin(la2));
}

int main()
{
  Simple_window win {Point{100, 100}, 600, 400, "Test Arrow"};
  Arrow a1 {Point{10, 10}, Point{60, 40}, 20, 20};
  Arrow a2 {Point{120, 120}, Point{100, 80}, 20, 40};

  win.attach(a1);
  win.attach(a2);
  win.wait_for_button();
}
