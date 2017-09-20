#include "../../std_lib_facilities.h"
#include "../../Graph.h"
#include "../../Simple_window.h"

Point n(Rectangle& r) {
  Point p0 = r.point(0);
  return Point{p0.x+r.width()/2, p0.y};
}

Point n(Ellipse& e) {
  Point p0 = e.point(0);
  return Point{p0.x+e.major(), p0.y};
}

int main()
{
  Simple_window win {Point{100, 100}, 600, 400, "Test Connections"};
  Rectangle r1{Point{20, 20}, 200, 100};
  Point nn = n(r1);
  
  cout << "North connection point of this rectangle is: "
       << "( " << nn.x << ", " << nn.y << " )" << endl;
       
  Ellipse e1{Point{120, 70}, 100, 50};
  Point ne = n(e1);
  cout << "North connection point of this ellipse is: "
       << "( " << ne.x << ", " << ne.y << " )" << endl;  
//   ostringstream oss;
//   oss << "( " << nn.x << ", " << nn.y << " )";
//   Text t{nn, oss.str()};
  
  win.attach(r1);
  win.attach(e1);
//   win.attach(t);
  win.wait_for_button();
}    
