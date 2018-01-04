#include "iostream"
int main()
{
  int* a = new int[10] {1,2,3,4,5,6,7,8,9,0};
  for (int i = 0; i < 10; i++){
    std::cout << "a[" << i << "] == "
      << a[i] << '\n';
  }
  delete[] a;
}
