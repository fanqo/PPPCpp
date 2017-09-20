#include "../../std_lib_facilities.h"
#include "../../Simple_window.h"
#include "../../Graph.h"

struct Regular_hexagon : Polygon {
  Regular_hexagon(Point p, int w);
  void add(Point p) {Polygon::add(p);}
  Point center() {return p;}
private:
  Point p;
  int w;
};

Regular_hexagon::Regular_hexagon(Point pp, int ww)
 : p{pp}, w{ww}
{ 
  const double pi {3.14159265359};
  for (int i = 0; i < 6; ++i){
    add(Point{center().x+static_cast<int>(cos(pi/3*i)*w), 
              center().y+static_cast<int>(sin(pi/3*i)*w)});
  }
}

int main()
{
  Simple_window win {Point{100, 100}, 600, 400, "Test Regular_hexagon"};
  Vector_ref<Regular_hexagon> vr;
  int w {20};  // regular hexagon side width
  int ix {60};   // initial x coordinate
  int iy {60};
  for (int i = 0; i < 3; ++i){
    for (int j = 0; j < 3; ++j){
      vr.push_back(new Regular_hexagon {Point{i*w*2+ix, j*w*2+iy}, w});
      win.attach(vr[vr.size()-1]);
    }
  }
  
  win.wait_for_button();
}

