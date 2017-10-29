#include "../../std_lib_facilities.h"

class B1 {
  public:
  virtual void vf() { cout << "B1::vf()" << endl; }
  void f() { cout << "B1::f()" << endl; }
};

class D1 : public B1 {
  public:
  void vf() override { cout << "D1::vf()" << endl; }
};

int main()
{
  D1 d1;
  B1& b1 {d1};

  cout << "Calling virtual function" << endl;
  b1.vf();

  cout << "Calling non-virtual function" << endl;
  b1.f();
}

