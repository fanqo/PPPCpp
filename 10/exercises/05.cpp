#include "../../std_lib_facilities.h"


struct Year{
  int year;
};

istream& operator>>(istream& is, Year& y){
  char ch;
  is >> ch;
  if (ch != '{') {
    is.unget();
    is.clear(ios_base::failbit);
    return is;
  }
  
  string year_marker;
  int yy;
  is >> year_marker >> yy;
  if ( !is || year_marker != "year") error ("bad start of year");
  y.year = yy;
  
  is >> ch;
  if (ch != '}') error ("bad end of year");
  return is;
}

ostream& print_year(ostream& os, Year& y){
  return  os << "Year " << y.year << endl;
}

int main()
  try{
    
    string iname {"05in"};
    ifstream ift {iname};
    if (!ift) error("Cannot open file ", iname);
    
    vector<Year> ys;
    for (Year y; ift >> y;){
      ys.push_back(y);
    }
    
    cout << "ys size is " << ys.size() << endl;
    
    for (Year& y: ys) print_year(cout, y);
    
    return 0;
  }
 
  catch (exception& e){
    cerr << "Error " << e.what() << endl;
    return 1;
  }
  
  catch (...){
    cerr << "Unknown error" << endl;
    return 2;
  }