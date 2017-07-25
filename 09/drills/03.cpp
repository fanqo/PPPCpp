#include "../../std_lib_facilities.h"

class Date {
  int y, m, d;
public:
  Date(int y, int m, int d);
  void add_day(int n);
  int month() const {return m;}
  int day() const {return d;}
  int year() const {return y;}
};

Date::Date(int yy, int mm, int dd)
  :y{yy}, m{mm}, d{dd}
{
  if(m < 1 || m > 12) error("month must in the range [1, 12]");
  if(d < 1 || d > 31) error("day must in the range [1, 31]");
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
  return os << '(' << dd.year()
	    << ',' << dd.month()
	    << ',' << dd.day() << ')';
}

int main()
  try{
    Date today {1978, 6, 25};
    Date tomorrow = today;
    tomorrow.add_day(1);
    
    cout << today << '\n';
    cout << tomorrow << '\n';
  }
  catch(runtime_error& e) {
    cout << e.what() << '\n';
  }

