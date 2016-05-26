// simple calculator
#include "../../std_lib_facilities.h"

int calculate(int, int, char);
int digit_or_spout(string);  	// digits or spell-out values

int main()
{
  cout << "Please enter two digits or spell-out values: \n"
       << "(0, 1, ..., 9 or zero, one, ..., nine)\n"
       << "followed by operator (+ - * /)\n";

  string s1 = " ";
  string s2 = " ";
  char op = ' ';
  int d_in1 = 0;
  int d_in2 = 0;
  while (cin >> s1 >> s2 >> op) {
    d_in1 = digit_or_spout(s1);
    d_in2 = digit_or_spout(s2);
    calculate(d_in1, d_in2, op);
  }
  return 0;
}
	
int calculate(int d1, int d2, char op)
{
  switch (op) {
  case '+':
    cout << "The sum of " << d1 << " and " << d2
	 << " is " << d1+d2 << '\n';
    break;
  case '-':
    cout << "The difference of " << d1 << " and " << d2
	 << " is " << d1-d2 << '\n';
    break;
  case '*':
    cout << "The product of " << d1 << " and " << d2
	 << " is " << d1*d2 << '\n';
    break;
  case '/':
    cout << "The quotient of " << d1 << " and " << d2
	 << " is " << d1/d2 << '\n';
    break;
  default:
    cout << "Please check the operator, only +, -, *, / supported\n";
    break;
  }
  return 0;
}

int digit_or_spout(string s)
{
  vector<string> spell_outs(10);
  spell_outs = {"zero", "one", "two", "three", "four", "five",
		"six", "seven", "eight", "nine"};
  int d;
  if (s.size() == 1)
    d = stoi(s);
  else 
    for (int i = 0; i < spell_outs.size(); ++i)
      if (s == spell_outs[i])
	d = i;

  return d;
}

