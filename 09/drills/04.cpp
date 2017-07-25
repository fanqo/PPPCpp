#include "../../std_lib_facilities.h"

enum Month {
  jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
    };

class Date{
public:
  Date();
  Date(int y, Month m, int d);
  int day() const { return d;}
  Month month() const {return m;}
  int year() const {return y;}
  void add_day(int n);
private:
  int y;
  Month m;
  int d;
};

const Date& default_date()
{
  static Date dd{1978, Month::jun, 25};
  return dd;
}

Date::Date()
  :y{default_date().year()},
  m{default_date().month()},
  d{default_date().day()}
{}

Date::Date(int yy, Month mm, int dd)
  :y{yy}, m{mm}, d{dd}
{}

void Date::add_day(int n)
{
  d += n;
  //if(d > 31){
  //d -= 31;
  //++m;
  //}
}
ostream& operator<<(ostream& os, const Date& dd)
{
  return os << '(' << dd.year()
	    << ',' << dd.month()
	    << ',' << dd.day() << ')';
}

int main()
  try{
    Date today;			// already has default value
    Date tomorrow = today;
    
    tomorrow.add_day(1);
    
    cout << today << '\n';
    cout << tomorrow << '\n';
  }
  catch(runtime_error& e){
    cerr << e.what() << '\n';
  }
