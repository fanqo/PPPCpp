//
#include "../../std_lib_facilities.h"
bool test_unit(string);
double convert_to_cm(double, string);

int main()
{
  constexpr double cm_to_m = 1.0/100;
  double d;
  string unit;
  bool is_unit;
  double amount;
  cout << "Please enter a floating-point number followed by a unit (cm, m, in, or ft):\n";
  cin >> d >> unit;		// enter an intial one

  double sum = 0;
  int n_value = 0;
  is_unit = test_unit(unit);
  vector<double> values;
  if (is_unit == true) {
    amount = convert_to_cm(d, unit);
    sum += amount;
    ++n_value;
    values.push_back(amount*cm_to_m);
  } else
    cout << "Please enter a known unit.\n";
  
  double smallest = amount;
  double largest = amount;

  while (cin >> d >> unit) {
    cout << d << unit;
    is_unit = test_unit(unit);
    
    if (is_unit == true) {
      amount = convert_to_cm(d, unit);
      ++n_value;
      sum += amount;
      values.push_back(amount*cm_to_m);
      
      if (amount < smallest) {
	cout << " the smallest so far";
	smallest = amount;
      }
      else if (amount > largest) {
	cout << " the largest so far";
	largest = amount;
      }
    }
    cout << '\n';
  }
  cout << "the number of values is: " << n_value << '\n';
  cout << "the sum of values is: " << sum*cm_to_m << " meters \n";

  sort(values);
  cout << "values are: ";
  for (double x : values)
    cout << x << " ";
  cout << "meters\n";
  return 0;
}

bool test_unit(string u)	// test if the unit is in the unit list
{
  vector<string> units = {"cm", "in", "m", "ft"};
  bool is_unit = false;
  
  for (string x : units)
    if (u == x)
      is_unit = true;
  
  if (is_unit == false)
    cout << "Sorry, I don't know the unit: " << u << '\n';

  return is_unit;
}

double convert_to_cm(double d, string u)
{
  constexpr double m_to_cm = 100;
  constexpr double in_to_cm = 2.54;
  constexpr double ft_to_in = 12;

  double amount = d;
  
  if (u == "cm")
    amount = amount;
  else if (u == "m")
    amount *= m_to_cm;
  else if (u == "in")
    amount *= in_to_cm;
  else if (u == "ft")
    amount *= ft_to_in*in_to_cm;

  return amount;
}
