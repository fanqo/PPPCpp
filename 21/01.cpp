#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void f(vector<int>& v, int x)
{
  auto p = find(v.begin(), v.end(), x);
  if (p != v.end()) {
    cout << "Value " << x << " is found." << endl;
  } else {
    cout << "Value " << x << " is not found." << endl;
  }
}

int main() 
{
  vector<int> v = {1, 2, 3, 4, 5, 6};
  f(v, 3);
  f(v, 7);
}

