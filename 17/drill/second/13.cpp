#include "../../../std_lib_facilities.h"

void print_vector(vector<int>& a)
{
  for (int i = 0; i < a.size(); ++i){
    cout << "[" << i << "] == "
      << a[i] << endl;
  }
}

int main()
{
  vector<int> p1 {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
  vector<int> p2 {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

  cout << "Before copy" << endl;
  cout << "Vector p1" << endl;
  print_vector(p1);
  cout << "Vector p2" << endl;
  print_vector(p2);

  p2 = p1;
  cout << "After copy" << endl;
  cout << "Vector p1" << endl;
  print_vector(p1);
  cout << "Vector p2" << endl;
  print_vector(p2);
}
