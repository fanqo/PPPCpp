#include "../../std_lib_facilities.h"

struct Point {
  double x;
  double y;
};

istream& operator>>(istream& s, Point& p)
{
  double x, y;
  s >> x >> y;
  if (!s) return s;
  p = Point {x, y};
  return s;
}

int main()
{
  vector<Point> original_points;
  cout << "Please enter 7 points: x y" << '\n';
  for (Point p; cin >> p;)
    original_points.push_back(p);
    
  for (int i; i < original_points.size(); ++i)
    cout << "Point " << i << " is " 
         << original_points[i].x << ", " 
         << original_points[i].y << '\n';
}