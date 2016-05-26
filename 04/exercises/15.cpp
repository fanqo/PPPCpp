// find the first n primes
#include "../../std_lib_facilities.h"

vector<int> add_prime(vector<int>);	// append new primes
bool is_prime(vector<int>, int);	// test if i is prime based on a vector

int main()
{
  vector<int> primes;
  primes.push_back(2);		// give an initialized prime vector

  cout << "How many primes do you want?\n";
  int n;
  cin >> n;

  for(int i = primes.size(); i < n; ++i) {
    primes=add_prime(primes);
  }

  cout << "Primes needed are: \n";
  for (int i = 0; i < primes.size(); ++i)
    cout << primes[i] << '\n';
  
  return 0;
}

vector<int> add_prime(vector<int> v)
{
  int n_v = v.size();		// the length of v
  int n_index = v.size()-1;	// v's last index
  // use n_index to access the last element of v
  bool isprime = true;
  bool isadd = false;		// test if a prime is added
  for (int i = v[n_index]+1; isadd == false; ++i) {
       isprime = is_prime(v, i);
       if (isprime == true) {
	 v.push_back(i);
	 isadd = true;
       }
  }
  return v;
}

bool is_prime(vector<int> v, int i)
{
  bool is_p = true;
  for (int j = 0; j < v.size(); ++j) {
    if ((i % v[j]) == 0)
      is_p = false;
  }

  return is_p;
}
