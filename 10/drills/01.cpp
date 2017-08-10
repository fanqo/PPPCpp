#include "../../std_lib_facilities.h"

struct Point {
  double x;
  double y;
};

int main()
{
  Point p {0.1, 0.2};
  cout << "Point is: (" << p.x << ", " << p.y << ")\n"; 
}