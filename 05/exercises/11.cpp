// Fibonacci series, find the largest Fibonacci number that fits in an int
#include "../../std_lib_facilities.h"
int main()
  try{
    vector<int> v = {1, 1, 2, 3, 5, 8}; // give intial values
    int nsize = v.size();		// new value index
    constexpr int nd = 24;	// how many Fibs to be displayed
    for (int i = nsize; v[i-1] > v[i-2]; ++i) {
      // normally, the later Fib is larger
      v.push_back(v[i-1]+v[i-2]);
    }
    cout << "The first " << nd << " Fibonacci numbers are: \n";
    for (int i = 0; i < nd; ++i)
      cout << v[i] << ' ';
    cout << '\n';
    cout << "The largest Fibonacci number that fits in an int is: "
	 << v[v.size()-2] << '\n';
  }
  catch (exception& e) {
    cerr << "Error: " << e.what() << '\n';
  }
  catch (...) {
    cerr << "Unkown exception!\n";
  }
