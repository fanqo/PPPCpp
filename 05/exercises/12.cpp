// Bulls and Cows game
#include "../../std_lib_facilities.h"

vector<int> i4tov(int);		// convert a four-figure integer into vector

int main()
{
  vector<int> v = {1, 8, 9, 6};	// number to be guessed
  vector<int> vi(4);		// number entered

  bool been_guessed = false;

  cout << "Please enter a four-figure integer to start guessing.\n";
  for (int i = 0; been_guessed == false;) {
    cin >> i;
    vi = i4tov(i);
    int nbull = 0;		// number of bulls
    int ncow = 0;		// number of cows
    for (int i = 0; i < 4; ++i) {
      for (int j = 0; j < 4; ++j) {
	if (vi[j] == v[i])
	    ++ncow;
      }
      if (vi[i] == v[i]) {
	++nbull;
	--ncow;
      }
    }
    cout << nbull << " Bulls and " << ncow << " Cows.\n";
    if (nbull == 4) {
      been_guessed = true;
      cout << "Excellent! You are correct!\n";
    }
    else
      cout << "Please guess another four-figure integer.\n";
  }
  return 0;
}

vector<int> i4tov(int i)
{
  vector<int> v(4);
  int itemp = i;
  for (int j = 3; j > -1; --j) {
    v[j] = itemp%10;
    itemp /= 10;
  }

  return v;
}
  
