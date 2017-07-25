#include "Name_pairs.h"

void Name_pairs::read_names()
{
  string s;
  cout << "Please input names(end input with 'end'): " << endl;
  while(cin >> s && s != "end") {
    name.push_back(s);
  }
}

void Name_pairs::read_ages()
{
  double a = -1;
  for(int i = 0; i < name.size(); ++i) {
    cout << "Please input age for " << name[i] << endl;
    cin >> a;
    age.push_back(a);
  }
}

void Name_pairs::print()
{
  cout << "The Name_pairs are: " << endl;
  for(int i = 0; i < name.size(); ++i) {
    cout << name[i] << ", " << age[i] << endl;
  }
}

void Name_pairs::nsort()
{
  vector<string> old_name = name;
  vector<double> old_age = age;
  
  sort(name);
  for(int i = 0; i < name.size(); ++i) {
    for(int j = 0; j < name.size(); ++j) {
      if(name[i] == old_name[j])
	age[i] = old_age[j];
    }
  }
}
