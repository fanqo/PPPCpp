#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int i;
  while(cin >> i) {
   errno = 0;
   double si = sqrt(i);
   if (errno) cerr << "no sqare root";
   else 
     cout << "The square root of " << i 
       << " is " << si << '\n';
  }
}
