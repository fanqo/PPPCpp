#include "../../std_lib_facilities.h"

namespace X {
  int var = 1;
  void print()
  {
    cout << var << endl;
  }
}

namespace Y {
  int var = 3;
  void print()
  {
    cout << var << endl;
  }
}

namespace Z {
  int var = 5;
  void print()
  {
    cout << var << endl;
  }
}

int main()
{
  cout << "X var, " << "Y var, " << "Z var, "
       << "Y var, " << "X var: " << endl;
  X::var = 7;
  X::print();
  using namespace Y;
  var = 9;
  print();
  {    using Z::var;
       using Z::print;
       var = 11;
       print();
  }
  print();
  X::print();
}
