#include "../../std_lib_facilities.h"
#include "../../Graph.h"
#include "../../Simple_window.h"

struct Regular_polygon : Polygon {
  Regular_polygon(Point c, int ns, int d);
  void add(Point p) { Polygon::add(p); }
  Point center() {return c;}
  private:
  Point c;
  int ns, d;
};

Regular_polygon::Regular_polygon(Point cc, int nss, int dd)
  : c{cc}, ns{nss}, d{dd}
{
  if (!(ns > 2)) error("Number of sides must larger than 2");
  const double pi {3.14159265359};
  for (int i = 0; i < ns; ++i) {
    add(Point{static_cast<int>(center().x+d*cos(2*pi/ns*i)),
        static_cast<int>(center().y+d*sin(2*pi/ns*i))});
  }
}

int main()
  try{
    Simple_window win {Point{100, 100}, 600, 400, "Test Regular_polygon"};

    Regular_polygon tri {Point{100, 100}, 3, 60};
    win.attach(tri);
    win.wait_for_button();

    Regular_polygon sen {Point{100, 100}, 7, 60};
    win.attach(sen);
    win.wait_for_button();

    return 0;
  }

  catch(exception& e){
    cerr << "Error: " << e.what() << endl;
    return 1;
  }
  
  catch(...){
    cerr << "Unkown error" << endl;
    return 2;
  }
