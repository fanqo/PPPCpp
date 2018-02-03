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


int main()
{
  S<int> si {1};
  S<char> sc {'a'};
  S<double> sd {1.1};
  S<string> ss {"string"};
  S<vector<int>> svi ({1,2,3});

  cout << "For si: " << si.get() << endl;
  cout << "For sc: " << sc.get() << endl;
  cout << "For sd: " << sd.get() << endl;
  cout << "For ss: " << ss.get() << endl;
  cout << "For svi: " << svi.get()[1] << endl;

  cout << "After set ****** " << endl;
  si=3;
  sc='b';
  sd=2.0;
  ss="string 2.0";
  svi={3,4,5,6};
  cout << "For si: " << si.get() << endl;
  cout << "For sc: " << sc.get() << endl;
  cout << "For sd: " << sd.get() << endl;
  cout << "For ss: " << ss.get() << endl;
  cout << "For svi: " << svi.get()[3] << endl;

}
