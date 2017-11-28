#include "../../std_lib_facilities.h"

struct Person {
  Person(string n, int a): pname(n), page(a){};
  string name() const {return pname;}
  int age() const {return page;}
private:
  string pname;
  int page;
};

istream& operator>>(istream& is, Person& p) {
  string name;
  int age;
  is >> name >> age;
  p = Person(name, age);
  return is;
}

ostream& operator<<(ostream& os, Person& p) {
  os << "Name: " << p.name() << ", age: " << p.age();
  return os;
}

int main()
{
  cout << "Please enter the name and age of a Person" << endl;
  Person p {"Nobody", 0};
  cin >> p;

  cout << p;
}
