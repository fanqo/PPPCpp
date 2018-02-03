#include <iostream>
#include<vector>

using namespace std;

template<typename T> 
struct S{
  S(T t) : val{t} {};
  T& get();
  const T& get() const;
  S& operator=(const T&);
private:
  T val;
};

template<typename T>
T& S<T>::get()
{
  return val;
}

template<typename T>
S<T>& S<T>::operator=(const T& t)
{
  val=t;
  return *this;
}

template<typename T>
void read_val(T& v)
{
  cin >> v;
}


int main()
{
  int vi {0};
  read_val(vi);
  S<int> si {vi};

  char vc {' '};
  read_val(vc);
  S<char> sc {vc};

  double vd {0.0};
  read_val(vd);
  S<double> sd {vd};

  string vs {" "};
  read_val(vs);
  S<string> ss {vs};

  cout << "For si: " << si.get() << endl;
  cout << "For sc: " << sc.get() << endl;
  cout << "For sd: " << sd.get() << endl;
  cout << "For ss: " << ss.get() << endl;
}
