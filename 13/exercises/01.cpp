#include "../../std_lib_facilities.h"
#include "../../Graph.h"
#include "../../Simple_window.h"

struct Arc : Shape {
  Arc(Point p, int w, int h, int sa, int ea); // center, axes width, arc angles
  void draw_lines() const;

  Point center() const { return p; }
  int width() const { return w; }
  int height() const { return h; }
private:
  int w;
  int h;
  Point p;
  int sa;
  int ea;
  Point lp;			// top-left point
};

Arc::Arc(Point pp, int ww, int hh, int saa, int eaa)
  : p{pp}, lp{Point{pp.x-w, pp.y-h}}, h{hh}, w{ww}, sa{saa}, ea{eaa} 
{
  add(lp);
}

void Arc::draw_lines() const
{
  if(color().visibility())
    fl_arc(lp.x, lp.y, w+w, h+h, sa, ea);
}

int main()
  try{
    Simple_window win {Point{100, 100}, 600, 400, "Test Arc"};
    int w, h;
    cout << "Please enter main axes length: w, h" << endl;
    cin >> w >> h;
  
    int sa, ea;
    cout << "Please enter starting angle and ending angle (degrees)" << endl;
    cin >> sa >> ea;
  
    Arc arc {Point{300, 200}, w, h, sa, ea};
    cout << "Arc center: " << arc.center().x << ", "
	 << arc.center().y << endl;
    cout << "Arc axes: " << arc.width() << ", " 
	 << arc.height() << endl;

    win.attach(arc);
    win.wait_for_button();
    return 0;
  }
 
  catch(exception& e){
    cerr << "Error: " << e.what() << endl;
    return 1;
  }

  catch (...) {
    cerr << "Unknown error" << endl;
    return 2;
  }
