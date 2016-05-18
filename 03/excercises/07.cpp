// order three strings
#include "../../std_lib_facilities.h"
int main()
{
  string val1 {" "};
  string val2 {" "};
  string val3 {" "};
  cout << "Please enter three integers:\n";
  cin >> val1 >> val2 >> val3;

  string biggest {" "};

  biggest = val1;
  if (biggest < val2) biggest = val2;
  if (biggest < val3) biggest = val3;
  if (biggest == val1)
    if (val2 < val3)
      cout << biggest << " " << val3 << " " << val2 << '\n';
  
  if (biggest == val1)
    if (val2 >= val3)
      cout << biggest << " " << val2 << " " << val3 << '\n';

  if (biggest == val2)
    if (val1 < val3)
      cout << biggest << " " << val3 << " " << val1 << '\n';

  if (biggest == val2)
    if (val1 >= val3)
      cout << biggest << " " << val1 << " " << val3 << '\n';

  if (biggest == val3)
    if (val1 < val2)
      cout << biggest << " " << val2 << " " << val1 << '\n';

  if (biggest == val3)
    if (val1 >= val2)
      cout << biggest << " " << val1 << " " << val2 << '\n';

  return 0;
}



