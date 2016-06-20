/* 首先程序要能提示用户输入两个整数(阶乘只对整数有意思)，然后再提示用户输入要计算的内容是排列还是组合，然后程序还要输出相应的结果；程序要有一个函数来专门用来计算阶乘，同时还要检查其参数是否合适(不能小于0)，将排列和组合也做成函数，这样包括主函数在内一共有四个函数。
int fact(i);
double perm(a, b)
   fact(a)/fact(a-b);
double comb(a, b)
   perm(a, b)/fact(b);
main
  perm(a, b);
  comb(a, b);

*/

#include "../../std_lib_facilities.h"

int fact(int i)
{
  if (i == 0)
    return 1;
  else if (i > 0)
    return i*fact(i-1);
  else
    error("Argument for factorial function cannot less than 0");
}

double perm(int a, int b)
{
  if (a<b)
    error("The first argument of permutation cannot less than the second");
  else
    return fact(a)/fact(a-b);
}

double comb(int a, int b)
{
  return perm(a, b)/fact(b);
}

int main()
  try{
    cout << "Please enter two integers for permutation or combination: \n";
    int a;
    int b;
    cin >> a >> b;

    cout << "Please enter the expected calculation, P for permutation, C for combination: \n";
    char c;
    cin >> c;

    if (c == 'P')
      cout << "The permutation for " << a << " and "
	   << b << " is " << perm(a, b) << '\n';
    else if (c == 'C')
      cout << "The combination for " << a << " and "
	   << b << " is " << comb(a, b) << '\n';
    else
      error("Unknown calculation");

    return 0;
  }
  catch(exception& e) {
    cerr << "Error: " << e.what() << '\n';
  }
    

