#include "../../std_lib_facilities.h"

struct Person {
  string name;
  int age;
};

istream& operator>>(istream& is, Person& p) {
  is >> p.name >> p.age;
  return is;
}

ostream& operator<<(ostream& os, Person& p) {
  os << "Name: " << p.name << ", age: " << p.age;
  return os;
}

int main()
{
  cout << "Please enter the name and age of a Person" << endl;
  Person p;
  cin >> p;

  cout << p;
}
