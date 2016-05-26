// convert yen, euros, pounds to dollars
#include "../std_lib_facilities.h"
int main()
{
  constexpr double yen_to_dollar = 0.0091;
  constexpr double euro_to_dollar = 1.12;
  constexpr double pound_to_dollar = 1.46;

  double money_amount = 0;
  char unit = 0;

  cout << "Please enter the amount of money, followed by its unit:\n"
       << "(y for yen, e for euros, p for pounds)\n";
  cin >> money_amount >> unit;

  if (unit == 'y')
    cout << money_amount << "yen == " << money_amount*yen_to_dollar
	 << "dollars\n";
  else if (unit == 'e')
    cout << money_amount << "euros == "<< money_amount*euro_to_dollar
	 << "dollars\n";
  else if (unit == 'p')
    cout << money_amount << "pounds == " << money_amount*pound_to_dollar
	 << "dollars\n";
  else
    cout << "Sorry, I don't know the unit: " << unit << '\n';

  return 0;
}
