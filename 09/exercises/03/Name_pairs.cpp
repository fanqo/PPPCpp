#include "Name_pairs.h"

void Name_pairs::read_names()
{
  string s;
  cout << "Please input names(end input with 'end'): " << endl;
  while(cin >> s && s != "end") {
    n.push_back(s);
  }
}

void Name_pairs::read_ages()
{
  double d = -1;
  for(int i = 0; i < n.size(); ++i) {
    cout << "Please input age for " << n[i] << endl;
    cin >> d;
    a.push_back(d);
  }
}


void Name_pairs::nsort()
{
  vector<string> old_name = n;
  vector<double> old_age = a;
  
  sort(n);
  for(int i = 0; i < n.size(); ++i) {
    for(int j = 0; j < n.size(); ++j) {
      if(n[i] == old_name[j])
	a[i] = old_age[j];
    }
  }
}

bool operator==(vector<string>& a, vector<string>& b)
{
  if(a.size()!=b.size()) return false;
  
  bool re = true;
  for(int i = 0; i < a.size(); ++i){
    re = re && (a[i] == b[i]);
  }
  return re;
}

bool operator==(vector<double>& a, vector<double>& b)
{
  if(a.size()!=b.size()) return false;
  
  bool re = true;
  for(int i = 0; i < a.size(); ++i){
    re = re && (a[i] == b[i]);
  }
  return re;
}

bool operator==(Name_pairs& a, Name_pairs& b)
{
  return (a.name() == b.name()) && (a.age() == b.age());
}

bool operator!=(Name_pairs& a, Name_pairs& b)
{
  return !(a == b);
}