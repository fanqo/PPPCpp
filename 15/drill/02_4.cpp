#include "../../std_lib_facilities.h"

struct Person {
  Person(string , int );
  string name() const {return pname;}
  int age() const {return page;}
private:
  string pname;
  int page;
};
Person::Person(string n, int a){
  if ((a >= 150) || (a < 0)) error("Range error of age");
  istringstream is {n};
  for (char c; is >> c;){
    switch(c){
      case ';': case ':': case '"': case '\'': case '[':
      case ']': case '*': case '&': case '%': case '$':
      case '@': case '#': case '!': case '^':
        error("Name error");
        break;
      default:
        break;
    }
  }
  pname = n;
  page = a;
}

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
  try{
    cout << "Please enter the name and age of a Person" << endl;
    Person p {"Nobody", 0};
    cin >> p;

    cout << p;
    return 0;
  }
catch(exception& e) {
  cerr << "Error: " << e.what() << endl;
  return 1;
}
catch(...) {
  cerr << "Unknown error" << endl;
  return 2;
}

