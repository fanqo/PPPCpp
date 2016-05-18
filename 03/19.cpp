// test conversions
#include "../std_lib_facilities.h"
int main()
{
  double d = 0;
  while (cin >> d) {
    // repeat the statements below as long as we type in numbers
    int i = d;			// try to squeeze a double into an int
    char c = i;			// try to squeeze an int into a char
    int i2 = c;			// get the integer value of the character

    cout << " double d == " << d	// the original double
	 << "\n int i = d: " << i	// converted to int
	 << "\n char c = i: " << c	// the char
	 << "\n int i2 = c: " << i2     // int value of char
	 << '\n';
  }
}

    
