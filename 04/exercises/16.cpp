// find the mode
// a vector is created, its index is used to denote the positive number
// and the corresponding element is used to denote the emerge time

#include "../../std_lib_facilities.h"
int main()
{
  vector<int> ints(100); 	// the vector can hold integer below 100

  for (int i = 0; i < ints.size(); ++i)
    ints[i] = 0;
  
  cout << "Please enter positive integers: \n";
  for (int i = 0; cin >> i;)
    ++ints[i];


  int n_max = 1;		// max appear time
  int mode = 0;			

  for (int i = 0; i < ints.size(); ++i) {
    if (ints[i] > n_max) {
      n_max = ints[i];
      mode = i;
    }
  }

  cout << "The (first) mode of this integer sequence is " << mode
       << " , it appears " << n_max << " times.\n";

  return 0;
}
    
