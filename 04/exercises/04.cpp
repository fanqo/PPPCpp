// number guessing game
#include "../../std_lib_facilities.h"
int main()
{
  cout << "Please think an integer between 1 and 100 "
       << "(No, no, no, don't tell me)\n";
  int current_guess = 50;
  int low_guess = 1;
  int high_guess = 100;
  string ans = "no";
  while ((current_guess != low_guess) && (current_guess != high_guess)) {
    cout << "Is the number you are thinking of less than "
	 << current_guess << "?\n";
    cout << "Please answer yes or no\n";
    cin >> ans;
    if (ans == "yes") {
      high_guess = current_guess;
      current_guess = (current_guess+low_guess)/2;
    } else if (ans == "no") {
      low_guess = current_guess;
      current_guess = (current_guess+high_guess)/2;
    } else 
      cout << "Please answer yes or no\n";
  }
  cout << "The number you are thinking of is: " << current_guess << '\n';
}

  
  
