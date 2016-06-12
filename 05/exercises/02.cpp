#include "../../std_lib_facilities.h"

double ctok(double c)		// converts Celsius to Kelvin
{
  constexpr double C_to_K = 273.15; // 加一句常量声明
  double k = c + C_to_K;	// 将int k = c + 273.15;改掉，防止出现narrowing error
  return k;			// 最后的结果由变量k来表示，应当return k;
}

int main()
{
  double c = 0;			// declare input variable
  cin >> c;			// d变量未义，看下文ctok的参数，这里应为c
  double k = ctok(c);		// ctok参数类型为double，故为c而不是"c"
  cout << k << '\n'; 		// C++区分大小写，标准输出为cout而非Cout
}
