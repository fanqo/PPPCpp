// find primes between 1-100
#include "../../std_lib_facilities.h"
int main()
{
  vector<int> primes;
  primes.push_back(2);
  cout << "Please enter an integer: \n";
  int max;
  cin >> max;
  for (int i = 2; i < max; ++i) { // 1 is NOT a prime
    bool is_prime = true;
    for (int j = 0; j < primes.size(); ++j)
      if ((i % primes[j]) == 0)
	is_prime = false;
    if (is_prime == true)
      primes.push_back(i);
  }

  cout << "Primes between 1 and " << max << " are: \n";
  for (int i = 0; i < primes.size(); ++i)
    cout << primes[i] << '\n';

  return 0;
}
