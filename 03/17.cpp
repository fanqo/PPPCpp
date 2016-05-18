// using a variable before intialize is not type-safe
#include "../std_lib_facilities.h"
int main()
{
  double x;			// we "forgot" to initialize
                                // the value of x if undefined
  double y = x;			// the value of y is undefined
  double z = 2.0+x;  // the meaning of + and the value of z are undefined
  cout << "x: " << x << ", y: " << y << ", z: " << z;
}
