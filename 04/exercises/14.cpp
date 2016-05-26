// find primes between 1-max, using "Sieve of Eratosthenes"
#include "../../std_lib_facilities.h"
int main()
{
  vector<char> primes;
  int max = 0;

  cout << "Please enter an integer: \n";
  cin >> max;
  for (int i = 0; i < max+1; ++i) // initialize primes vector, index from 0
    primes.push_back('t');	  // test index is prime or not

  for (int i = 2; i < primes.size()-1; ++i) // j = i+1 --> i < primes.size()-1
    if (primes[i] == 't') {
      for (int j = i+1; j < primes.size(); ++j) {
	if ((primes[j] == 't') && ((j % i) == 0))
	  primes[j] = 'f';
      }
    }
  cout << "Primes between 1 and " << max << " are: \n";
  for (int i = 2; i < primes.size(); ++i)
    if (primes[i] == 't')
      cout << i << '\n';

  return 0;
}
