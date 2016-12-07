#include "../../../std_lib_facilities.h"
#include "name_age.h"

void sort_name_age(vector<string>& name, vector<double>& age) 
{
  vector<string> nametmp {name};
  vector<double> agetmp {age};
  
  sort(name.begin(), name.end());
  
  for (int i = 0; i < name.size(); ++i) {
    for (int j = 0; j < name.size(); ++j) {
      if (nametmp[j] == name[i])
	age[i] = agetmp[j];
    }
  }
}
