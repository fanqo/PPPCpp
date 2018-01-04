#include <iostream>

class vector {
  int sz;
  double* elem;
public:
  vector(int s): sz{s}, elem{new double[s]} {/*...*/} // constructor
  ~vector() { std::cout << "delete vec\n"; delete[] elem; } // destructor

  int size() const { return sz; }
  double get(int n) const { return elem[n]; }  // access: read
  void set(int n, double v) { elem[n] = v; }  // access: write
};

int main()
{
  vector v(5);
  for (int i=0; i < v.size(); ++i) {
    v.set(i, 1.1*i);
    std::cout << "v[" << i << "] == " << v.get(i) << '\n';
  }
}
