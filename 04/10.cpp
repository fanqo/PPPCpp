// convert yen, euros, pounds, yuan, kroner to dollar, switch version
#include "../std_lib_facilities.h"
int main()
{
  constexpr double yen_to_dollar=0.0091;
  constexpr double euro_to_dollar=1.12;
  constexpr double pound_to_dollar=1.45;
  constexpr double yuan_to_dollar=0.15;
  constexpr double kroner_to_dollar=0.12; // Swedish Krona

  cout << "Please enter the amount of money, followed by the unit\n"
       << "(y for yen, e for euro, p for pound, Y for yuan, k for kroner)\n";
  double amount=0;
  char unit='a';
  cin >> amount >> unit;
  switch (unit) {
  case 'y':
    cout << amount << "yen == " << amount*yen_to_dollar << "dollars\n";
    break;
  case 'e':
    cout << amount << "euros == " << amount*euro_to_dollar << "dollars\n";
    break;
  case 'p':
    cout << amount << "pounds == " << amount*pound_to_dollar << "dollars\n";
    break;
  case 'Y':
    cout << amount << "yuan == " << amount*yuan_to_dollar << "dollars\n";
    break;
  case 'k':
    cout << amount << "kroner == " << amount*kroner_to_dollar << "dollars\n";
    break;
  }
  return 0;
}
