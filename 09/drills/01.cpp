#include "../../std_lib_facilities.h"

struct Date {
  int y;
  int m;
  int d;
};

void init_day(Date& dd, int y, int m, int d)
{
  if(m < 1 || m > 12) error("month must in the range [1, 12]");
  if(d < 1 || d > 31) error("day must in the range [1, 31]");
  dd.y = y;
  dd.m = m;
  dd.d = d;
}

void add_day(Date& dd)		// add one day
{
  if(dd.d == 31) {
    dd.d = 1;
    ++dd.m;
  } else {
    ++dd.d;
  }
}

ostream& operator<<(ostream& os, const Date& d)
{
  return os << '(' << d.y 
	    << ',' << d.m
	    << ',' << d.d << ')';
}

int main() 
try {
  Date today;
  init_day(today, 1978, 6, 32);
  
  Date tomorrow = today;
  add_day(tomorrow);
  
  cout << today;
  cout << tomorrow;
 }
 catch(runtime_error& e) {
   cerr << e.what() << '\n';
 }
