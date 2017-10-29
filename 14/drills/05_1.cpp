#include "../../std_lib_facilities.h"

class B1 {
  public:
  virtual void vf() { cout << "B1::vf()" << endl; }
  void f() { cout << "B1::f()" << endl; }
  virtual void pvf() =0;
};

int main()
{
  B1 b1;

  cout << "Calling virtual function" << endl;
  b1.vf();

  cout << "Calling non-virtual function" << endl;
  b1.f();
}

