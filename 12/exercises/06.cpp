#include "../../std_lib_facilities.h"
#include "../../Simple_window.h"
#include "../../Graph.h"
int main()
  try{
    int xmax = x_max();
    int ymax = y_max();

    Simple_window win1 {Point{10,10}, 600, 400, "Small window"};
    Rectangle r1 {Point{10, 10}, 800, 600};
    win1.attach(r1);
    win1.wait_for_button();

    Simple_window win2 {Point{10,10}, xmax+60, ymax+60, "Big window"};
    win2.wait_for_button();
  }

  catch(exception& e) {
    cerr << "Error: " << e.what() << endl;
  }

  catch(...) {
    cerr << "Unknown error." << endl;
  }
