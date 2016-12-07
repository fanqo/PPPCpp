#include "../../std_lib_facilities.h"
#include "03/fibonacci.h"
int main()
{
  int x {1};
  int y {2};
  vector<int> v(3);

   
  /* v has only 3 elements, if the last one is larger than the second last
     one, make v shift one element, then the final second last element is
     about the maximum int, as the last element has changed sign          */

  fibonacci(x, y, v, 3);
  for(;v[2] > v[1]; fibonacci(v[1], v[2], v, 3))
    {}
  cout << "Maximum int is about: " << v[1] << endl;
}
