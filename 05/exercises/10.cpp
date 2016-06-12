// store and compute the sum of first N doubles
#include "../../std_lib_facilities.h"
int main()
  try{
    cout << "Please enter the number of values you want to sum: \n";
    int n;
    cin >> n;
    cout << "Please enter some doubles (press '|' to stop): \n";
    vector<double> v;
    for (double i = 0; cin >> i;)
      v.push_back(i);

    if (v.size() < n)
      error("Not enough doubles!");
    else {
      double sum = 0;
      for (int i = 0; i < n; ++i) {
	sum += v[i];
      }
      cout << "The sum of the first " << n << " numbers is " << sum << ".\n";
      
      vector<double> vd;
      for (int i = 0; i < n-1; ++i)
	vd.push_back(v[i+1]-v[i]);

      cout << "The differences between adjacent values are: ";
      for(double x : vd)
	cout << x << ' ';
      cout << '\n';
    }

    return 0;
  }
  catch (exception& e) {
    cerr << "Error: " << e.what() << '\n';
  }
  catch (...) {
    cerr << "Unknown exception!\n";
  }
