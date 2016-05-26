// simple calculator
#include "../../std_lib_facilities.h"
int main()
{
  cout << "Please enter two double values followed by an operation: \n";
  double d1;
  double d2;
  char op;
  
  while (cin >> d1 >> d2 >> op) {
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
  }

  return 0;
}
	
