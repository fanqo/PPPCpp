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
  
  ofstream os;
  os.open("mydata.txt", ios_base::out);
  for (int i; i < original_points.size(); ++i)
    os   << original_points[i].x << " " 
         << original_points[i].y << '\n';
  
  os.close();
  cout << "Original points are: " << '\n';
  for (int i; i < original_points.size(); ++i)
     cout << "    " << original_points[i].x 
          << ", " << original_points[i].y << '\n';
  
  ifstream is {"mydata.txt"};
  if (!is) error("can't open input file");
  vector<Point> processed_points;
  for (Point p; is >> p;)
    processed_points.push_back(p);
  
  cout << "Processed_points are: " << '\n';  
  for (int i; i < processed_points.size(); ++i)
     cout << "    " << processed_points[i].x 
          << ", " << processed_points[i].y << '\n';
}