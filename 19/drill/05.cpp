#include <iostream>
#include<vector>

using namespace std;

template<typename T> 
struct S{
  S(T t) : val{t} {};
  T& get();
  void set(T);
private:
  T val;
};

template<typename T>
T& S<T>::get()
{
  return val;
}

template<typename T>
void S<T>::set(T t)
{
  val = t;
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
  si.set(3);
  sc.set('b');
  sd.set(2.0);
  ss.set("string 2.0");
  svi.set({3,4,5,6});
  cout << "For si: " << si.get() << endl;
  cout << "For sc: " << sc.get() << endl;
  cout << "For sd: " << sd.get() << endl;
  cout << "For ss: " << ss.get() << endl;
  cout << "For svi: " << svi.get()[3] << endl;

}
