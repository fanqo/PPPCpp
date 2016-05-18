// take an operation followed by two operands
#include "../../std_lib_facilities.h"
int main()
{
  cout << "Please enter an operation (+ - * /) followed by two operands:\n";
  string operation;
  double oper1;
  double oper2;

  while (cin >> operation >> oper1 >> oper2) {
    if (operation == "+") cout << oper1+oper2 << '\n';
    if (operation == "-") cout << oper1-oper2 << '\n';
    if (operation == "*") cout << oper1*oper2 << '\n';
    if (operation == "/") cout << oper1/oper2 << '\n';
  }
  return 0;
}
