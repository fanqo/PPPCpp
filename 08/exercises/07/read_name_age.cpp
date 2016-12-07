#include "../../../std_lib_facilities.h"
#include "name_age.h"

void read_name_age(vector<string>& name, vector<double>& age)
{
  cout << "Please input names (end input with !): " << endl;
  string s;
  while((cin >> s) && (s != "!")) {
    name.push_back(s);
  }
  cout << "Please enter ages for names: " << endl;
  double a;
  for (int i = 0; i < name.size(); ++i) {
    cin >> a;
    age.push_back(a);
  }

  cout << "The names and ages are: " << endl;
  for (int i = 0; i < name.size(); ++i) {
    cout << "(" << name[i] << ", " << age[i] << ")" << endl;
  }
}
