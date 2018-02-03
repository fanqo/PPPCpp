#include <iostream>
#include<vector>

using namespace std;

template<typename T> 
struct S{
  T val;
  S(T t) : val{t} {};
};

int main()
{
  S<int> si {1};
  S<char> sc {'a'};
  S<double> sd {1.1};
  S<string> ss {"string"};
  S<vector<int>> svi ({1,2,3});

  cout << "For si: " << si.val << endl;
  cout << "For sc: " << sc.val << endl;
  cout << "For sd: " << sd.val << endl;
  cout << "For ss: " << ss.val << endl;
  cout << "For svi: " << svi.val[1] << endl;
}
