// read name and age, write name and age in month
#include "../std_lib_facilities.h"
int main()
{
  cout << "Please enter your name and age (in year)\n";
  string name;
  int age;
  cin >> name >> age;
  cout << "Hello, " << name << "(age: " << age*12 << " months)\n";
  return 0;
}
