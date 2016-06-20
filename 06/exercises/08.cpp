#include "../../std_lib_facilities.h"
int main()
  try {
    vector<char> v {'a', 'b', 'c', 'd'}; // characters to be guessed

    cout << "Please guess by entering four characters: \n";
    vector<char> vi(4);		// characters entered
    int n_bull = 0;
    int n_cow = 0;
    while ((cin >> vi[0] >> vi[1] >> vi[2] >> vi[3]) && n_bull != v.size()) {
      n_bull = 0;
      n_cow = 0;
      for (int i = 0; i < v.size(); ++i) {
	if (vi[i] == v[i]) ++n_bull;
	for (int j = 0; j < v.size(); ++j) {
	  if (vi[j] == v[i]) ++n_cow;
	}
      }
      cout << n_bull << " Bulls and " << n_cow-n_bull << " Cows.\n";
      if (n_bull == v.size()) cout << "Excellent! All bulls.\n";
    }

    return 0;
  }
  catch(exception& e) {
    cerr << "Error: " << e.what() << '\n';
  }

    
