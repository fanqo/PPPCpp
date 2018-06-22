#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s {"中文"};
  string us {u8"中文"};

  cout << "string: " << s 
    << ", size: " << s.size() << endl;
  cout << "unicode string: " << us 
    << ", size: " << us.size() << endl;
}

