//
#include "../../std_lib_facilities.h"
int main()
{
  constexpr double m_to_cm = 100;
  constexpr double in_to_cm = 2.54;
  constexpr double ft_to_in = 12;
  
  double d = 0;
  string unit = "a";
  string illegal_unit = "false";
  
  cout << "Please enter a floating-point number followed by a unit (cm, m, in, or ft):\n";
  cin >> d >> unit;		// enter an intial one
  
  double amount = d;
  if (unit == "cm")
    amount = amount;
  else if (unit == "m")
    amount *= m_to_cm;
  else if (unit == "in")
    amount *= in_to_cm;
  else if (unit == "ft")
    amount *= ft_to_in*in_to_cm;
  else {
    cout << "Sorry, I don't know the unit: " << unit << '\n';
    illegal_unit = "true";
  }
  
  double smallest = amount;
  double largest = amount;
  while (cin >> d >> unit) {
    cout << d << unit;
    amount = d;
    illegal_unit = "false";
    if (unit == "cm")
      amount = amount;
    else if (unit == "m")
      amount *= m_to_cm;
    else if (unit == "in")
      amount *= in_to_cm;
    else if (unit == "ft")
      amount *= ft_to_in*in_to_cm;
    else {
      cout << "\nSorry, I don't know the unit: " << unit;
      illegal_unit = "true";
    }

    if (illegal_unit == "false")
      if (amount < smallest) {
	cout << " the smallest so far";
	smallest = amount;
      }
      else if (amount > largest) {
	cout << " the largest so far";
	largest = amount;
      }
    
    cout << '\n';
  }
  return 0;
}
