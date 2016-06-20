//reads digits and compose them into integers
#include "../../std_lib_facilities.h"

char get_int()
{
  char c;
  cin >> c;
  switch(c){
  case '0': case '1': case '2': case '3': case '4': case '5':
  case '6': case '7': case '8': case '9':
    {
      return c;
    }
  case 'x':
    {
      return 'x';
    }
  default:
    {
      error("Not a digit!");
    }
  }
}

int main()
  try{
    int val = 0;
    char c;
    while ((c=get_int()) != 'x') // use 'x' end input
      val = val*10+(c-'0');

    cout << val << " is ";
    if (val/1000 != 1)
      cout << val/1000 << " thousands";
    else
      cout << val/1000 << " thousand";

    val = val-(val/1000)*1000;
    if (val/100 != 1)
      cout << " and " << val/100 << " hundreds";
    else
      cout << " and " << val/100 << " hundred";

    val = val-(val/100)*100;
    if (val/10 != 1)
      cout << " and " << val/10 << " tens";
    else
      cout << " and " << val/10 << " ten";

    val = val-(val/10)*10;
    if (val != 1)
      cout << " and " << val << " ones";
    else
      cout << " and " << val << " one";

    cout << '\n';

    return 0;
  }
  catch(exception& e) {
    cerr << "Error: " << e.what() << '\n';
  }
    
