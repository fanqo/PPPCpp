// store and compute the sum of first N integers
#include "../../std_lib_facilities.h"
int main()
  try{
    cout << "Please enter the number of values you want to sum: \n";
    int n;
    cin >> n;
    cout << "Please enter some integers (press '|' to stop): \n";
    vector<int> v;
    for (int i = 0; cin >> i;)
      v.push_back(i);

    if (v.size() < n)
      error("Not enough integers!");
    else {
      int sum = 0;
      for (int i = 0; i < n; ++i) {
	sum += v[i];
      }
      cout << "The sum of the first " << n << " numbers is " << sum << ".\n";
    }

    return 0;
  }
  catch (out_of_range) {	// doesn't work
    cerr << "The result cannot be represented as an int.\n";
  }
  catch (exception& e) {
    cerr << "Error: " << e.what() << '\n';
  }
  catch (...) {
    cerr << "Unknown exception!\n";
  }
