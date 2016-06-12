// Bulls and Cows game, Randomly repeated version
// *****ATTENTION: this code does not work expectedly
#include "../../std_lib_facilities.h"

vector<int> i4tov(int);	  // convert a four-figure integer into vector
vector<int> inital_v4(); // randomly initialize an four-integer-element vector

int main()
{
  vector<int> v(4);	// number to be guessed
  vector<int> vi(4);		// number entered

  v = inital_v4();			// initialize v
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
  
vector<int> inital_v4()
{
  vector<int> v(4);
  cout << "Please enter an abitrary number as a seed.\n";
  double n = 0;
  cin >> n;
  srand(n);
  
  for (int i = 0; i < 4; ++i) {
    v[i] = randint(10);
  }
  return v;
}
