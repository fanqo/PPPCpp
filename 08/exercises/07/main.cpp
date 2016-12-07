#include "../../../std_lib_facilities.h"
#include "name_age.h"

int main()
{
  vector<string> name;
  vector<double> age;

  read_name_age(name, age);

  sort_name_age(name, age);
  
  cout << " Names and ages pairs after sorting are: " << endl;
  for(int i = 0; i < name.size(); ++i) {
    cout << "(" << name[i] << ", " << age[i] << ")" << endl;
  }

}
