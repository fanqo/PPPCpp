// test subtracting strings
#include "../std_lib_facilities.h"
int main()
{
  int count;
  cin >> count;			// >> reads an integer into count
  string name;
  cin >> name;			// >> reads a string into name
  int c2 = count+2;		// + adds integers
  string s2 = name+"Jr.";	// + appends characters
  int c3 = count-2;		// - substrcts integers
  string s3 = name-"Jr.";	// error: - isn't defined for strings
}
