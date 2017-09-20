#include "../../std_lib_facilities.h"
#include "../../Graph.h"
#include "../../Simple_window.h"

struct Box : Shape {
  Box(Point p, int w, int h, int r = 10); 
  // top-left corner, width, height, coner radius

  void draw_lines() const;
  int height() const { return h; }
  int width() const { return w; }
private:
  Point p;
  int w, h, r;
};

Box::Box(Point pp, int ww, int hh, int rr)
  : p{pp}, w{ww}, h{hh}, r{rr}
{
  if ( (w < r+r) || (h < r+r) )
    error("Bad rectangle: Corner radius is too large");
  add(p);
}

void Box::draw_lines() const {
  Point rnw, rne, rsw, rse;	// Points for lines
  Point anw, ane, asw, ase;	// arc centers

  rnw = Point{p.x, p.y};
  rne = Point{p.x+w, p.y};
  rsw = Point{p.x, p.y+h};
  rse = Point{p.x+w, p.y+h}; 

  anw = Point{rnw.x+r, rnw.y+r};
  ane = Point{rne.x-r, rne.y+r};
  asw = Point{rsw.x+r, rsw.y-r};
  ase = Point{rse.x-r, rse.y-r};
  if (color().visibility()){
    fl_line(rnw.x, rnw.y+r, rsw.x, rsw.y-r);
    fl_line(rnw.x+r, rnw.y, rne.x-r, rne.y);
    fl_line(rne.x, rne.y+r, rse.x, rse.y-r);
    fl_line(rsw.x+r, rsw.y, rse.x-r, rse.y);    

    fl_arc(anw.x-r,anw.y-r,r+r,r+r,90,180);
    fl_arc(ane.x-r,ane.y-r,r+r,r+r,0,90);
    fl_arc(asw.x-r,asw.y-r,r+r,r+r,180,270);
    fl_arc(ase.x-r,ase.y-r,r+r,r+r,270,360);
  }
}

int main()
  try{
    Simple_window win {Point{100, 100}, 600, 400, "Test Box"};
    Box box1 {Point{20, 20}, 100, 80};
    Box box2 {Point{120, 160}, 100, 80, 20};
    win.attach(box1);
    win.attach(box2);
    win.wait_for_button();
    return 0;
  }

  catch (exception& e) {
    cerr << "Error: " << e.what() << endl;
    return 1;
  }
  catch (...) {
    cerr << "Unknwon Error" << endl;
    return 2;
  }
