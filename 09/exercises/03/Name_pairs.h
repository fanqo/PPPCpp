#include "../../../std_lib_facilities.h"

class Name_pairs {
 public:
  void read_names();
  void read_ages();
  void print();
  void nsort();
  vector<string> name() {return n;}
  vector<double> age() {return a;}

 private:
  vector<string> n;
  vector<double> a;
};

bool operator==(vector<string>& a, vector<string>& b);
bool operator==(vector<double>& a, vector<double>& b);
bool operator==(Name_pairs& a, Name_pairs& b);
bool operator!=(Name_pairs& a, Name_pairs& b);