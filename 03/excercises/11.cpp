// count coins
#include "../../std_lib_facilities.h"
int main()
{
  cout << "How many pennies do you have?\n"; 
  int n_penny {0};
  cin >> n_penny;

  cout << "How many nickels do you have?\n";
  int n_nickel {0};
  cin >> n_nickel;

  cout << "How many dimes do you have?\n";
  int n_dime {0};
  cin >> n_dime;

  cout << "How many quarters do you have?\n";
  int n_quarter {0};
  cin >> n_quarter;

  cout << "How many half dollars do you have?\n";
  int n_hdollar {0};
  cin >> n_hdollar;

  cout << "How many one dollars do you have?\n";
  int n_odollar {0};
  cin >> n_odollar;

  if (n_penny == 1) cout << "You have 1 penny.\n";
  if (n_penny > 1) cout << "You have " << n_penny << " pennies.\n";

  if (n_nickel == 1) cout << "You have 1 nickel.\n";
  if (n_nickel > 1) cout << "You have " << n_nickel << " nickels.\n";

  if (n_dime == 1) cout << "You have 1 dime.\n";
  if (n_dime > 1) cout << "You have " << n_dime << " dimes.\n";

  if (n_quarter == 1) cout << "You have 1 quarter.\n";
  if (n_quarter > 1) cout << "You have " << n_quarter << " quarters.\n";

  if (n_hdollar == 1) cout << "You have 1 half dollar.\n";
  if (n_hdollar > 1) cout << "You have " << n_hdollar << " half-dollars.\n";

  if (n_odollar == 1) cout << "You have 1 one-dollar.\n";
  if (n_odollar > 1) cout << "You have " << n_odollar << " one-dollars.\n";

  int n_coin {0};
  n_coin = n_penny+n_nickel+n_dime+n_quarter+n_hdollar+n_odollar;
  if (n_coin == 1) cout << "You have 1 coin.\n";
  if (n_coin > 1) cout << "You have " << n_coin << " coins.\n";

  int cents {0};
  cents = n_penny*1+n_nickel*5+n_dime*10+n_quarter*25
    +n_hdollar*50+n_odollar*100;
  if (cents == 1) cout << "The value of all of your coins is 1 cent.\n";
  if (cents > 1) cout << "The value of all of your coins is "
		      << cents << " cents.\n";
}
