#include "../std_lib_facilities.h"

// print 1234567.89 in different format

int main()
{
  double number {1234567.89};
  cout << "number is " << number << "\t"
       << fixed << number << " (fixed) \t"
       << scientific << number << " (sci) "
       << endl;
}
