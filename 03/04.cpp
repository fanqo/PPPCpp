// read name and age (2nd version)
#include "../std_lib_facilities.h"
int main()
{
  cout << "Please enter your 名字 and age\n";
  string first_name = "???";	// string variable
                                // ("???" means "don't know the name")
  int age = -1;	    // integer variable(-1 means "don't know the age")
  cin >> first_name >> age;	// read a string followed by an integer
  cout << "Hello, " << first_name << "(age " << age <<")\n";
}
