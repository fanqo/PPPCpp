#include "../../std_lib_facilities.h"

struct Date {
  int y, m, d;
  Date(int y, int m, int d);	// check for valid date and initialize
  void add_day(int n);
};

Date::Date(int yy, int mm, int dd)
{
  if(mm < 1 || mm > 12) error("month must in the range [1, 12]");
  if(dd < 1 || dd > 31) error("day must in the range [1, 31]");
  
  y = yy;
  m = mm;
  d = dd;
}

void Date::add_day(int n)
{
  d += n;
  if(d > 31) {
    d -= 31;
    ++m;
  }
}

ostream& operator<<(ostream& os, const Date& dd)
{
 return  os << '(' << dd.y
	    << ',' << dd.m
	    << ',' << dd.d << ')';
}

int main()
  try {
    Date today {1978, 6, 31};
    
    Date tomorrow = today;
    tomorrow.add_day(1);
    
    cout << today << '\n';
    cout << tomorrow << '\n';
  }
  catch(runtime_error& e) {
    cout << e.what() << '\n';
  }
