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

bool operator!=(Point& a, Point& b){
  return (a.x != b.x || a.y != b.y);
}

int main()
  try{
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
  
    ifstream is {"mydata.txt"};
    if (!is) error("can't open input file");
    vector<Point> processed_points;
    for (Point p; is >> p;)
      processed_points.push_back(p);
    
//    processed_points[2].x = 0;
      
    if (original_points.size() != processed_points.size()) {
      error("Something's wrong (size)");
    } else {
      for (int i; i < original_points.size(); ++i) {
        if (processed_points[i] != original_points[i])
          error("Something's wrong (element)");
      }
    } 
  return 0;
  }
  catch (exception& e){
    cerr << "Error: " << e.what() << '\n';
    return 1;
  }
  catch (...){
    cerr << "Unknown error" << '\n';
    return 2;
  }