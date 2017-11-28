#include "../../std_lib_facilities.h"

struct Person {
  string name;
  int age;
};

int main()
{
  Person ap {"Goofy", 63};

  cout << "Name: " << ap.name << ", age: " << ap.age << endl;
}
