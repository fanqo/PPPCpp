#include "../../std_lib_facilities.h"

class B1 {
  public:
  virtual void vf() { cout << "B1::vf()" << endl; }
  void f() { cout << "B1::f()" << endl; }
  virtual void pvf() =0;
};

class D1 : public B1 {
  public:
  void vf() override { cout << "D1::vf()" << endl; }
  void f() { cout << "D1::f()" << endl; }
  void pvf() override { cout << "D1::pvf()" << endl; }
};

class D2 : public D1 {
  public:
  void pvf() override { cout << "D2::pvf()" << endl; }
};

int main()
{
  D2 b1;

  cout << "Calling virtual function" << endl;
  b1.vf();

  cout << "Calling non-virtual function" << endl;
  b1.f();

  cout << "Calling pure virtual function" << endl;
  b1.pvf();
}

