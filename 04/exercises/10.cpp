// Rock, Paper, Scissors game
#include "../../std_lib_facilities.h"
int main()
{
  cout << "Please enter an integer: \n";

  vector<string> v_rps;		// Rock, Paper, Scissors vector
  int rps_size = 17;		// how many elements can be hold by v_rps
  int remainder = 0;    // according remainder to push back element to v_rps
  int sel_index = 0;		// select index
  for (int ran;cin >> ran;) {
    if (v_rps.size() <= 3)
      remainder = ran%3;
    else
      remainder = (ran%v_rps.size())%3;

    if (v_rps.size() <= rps_size) { // give different v_rps according to ran
      switch (remainder) {
      case 0:
	v_rps.push_back("Rock");
	break;
      case 1:
	v_rps.push_back("Paper");
	break;
      case 2:
	v_rps.push_back("Scissors");
	break;
      }
    }
    sel_index = ran%v_rps.size(); // select different element according to ran
    cout << v_rps[sel_index] << '\n';
  }
  return 0;
}
