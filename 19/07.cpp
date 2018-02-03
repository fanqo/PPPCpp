#include <iostream>
#include <vector>

using namespace std;
struct Range_error: out_of_range {  // enhanced vector range error reporting
  int index;
  Range_error(int i) : out_of_range("Range error"), index(i) {}
};

template<typename T> struct Vector: public std::vector<T> {
  using size_type = typename std::vector<T>::size_type;
  using vector<T>::vector;  // use vector<T>'s constructors

  T& operator[](size_type i)  // rather than return at(i);
  {
    if (i < 0 || this->size() <= i) throw Range_error(i);
    return std::vector<T>::operator[](i);
  }

  const T& operator[](size_type i) const
  {
    if (i < 0 || this->size() <= i) throw Range_error(i);
    return std::vector<T>::operator[](i);
  }
};

void print_some(Vector<int>& v)
{
  int i = -1;
  while(cin >> i && i != -1)
    try{
      cout << "v[" << i << "] == " << v[i] << '\n';
    }
  catch(Range_error) {
    cout << "bad index: " << i << '\n';
  }
}

int main()
{
  Vector<int> a(10);
  for (int i = 0; i < a.size(); ++i)
    a[i] = i;

  print_some(a);
}

