#include "../../std_lib_facilities.h"

class B2 {
  public:
  virtual void pvf() =0;
};

class D21 : public B2 {
  string s {"D21's string"};
  public:
  void pvf() override { cout << s << endl; }
};

class D22 : public B2 {
  int i {22};
  public:
  void pvf() override { cout << i << endl; }
};

void f(B2& b){
  b.pvf();
}

int main()
{
  D21 d21;
  D22 d22;
  B2& b21 {d21};
  B2& b22 {d22};

  cout << "D21: " << endl;
  f(b21);

  cout << "D22: " << endl;
  f(b22);
}

