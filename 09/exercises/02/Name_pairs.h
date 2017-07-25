#include "../../../std_lib_facilities.h"

class Name_pairs {
 public:
  void read_names();
  void read_ages();
  void print();
  void nsort();

 private:
  vector<string> name;
  vector<double> age;
};
