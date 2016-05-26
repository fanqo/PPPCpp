// find primes between 1-100, using "Sieve of Eratosthenes"
#include "../../std_lib_facilities.h"
int main()
{
  vector<char> primes(100+1);	// vector's index is from 0

  for (int i = 0; i < primes.size(); ++i) // initialize primes vector
    primes[i] = 't';		// test index is prime or not

  for (int i = 2; i < primes.size()-1; ++i) // j = i+1 --> i < primes.size()-1
    if (primes[i] == 't') {
      for (int j = i+1; j < primes.size(); ++j) {
	if ((primes[j] == 't') && ((j % i) == 0))
	  primes[j] = 'f';
      }
    }
  cout << "Primes between 1 and 100 are: \n";
  for (int i = 2; i < primes.size(); ++i)
    if (primes[i] == 't')
      cout << i << '\n';

  return 0;
}
