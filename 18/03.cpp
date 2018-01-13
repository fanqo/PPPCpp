#include <iostream>

class vector {
  int sz;  // the size
  double* elem;  // a pointer to the elements
public:
  vector(int s)  // constructor (s is the element count)
    :sz{s}, elem{new double[sz]}  // uninitialized memory for elements
  {
    for (int i = 0; i < sz; ++i) elem[i] = 0.0;  // initialize
  }

  vector(std::initializer_list<double> lst)  // initializer-list constructor
    :sz{static_cast<int>(lst.size())}, elem{new double[sz]} // uninitialized memory
  {
    std::copy(lst.begin(), lst.end(), elem);  // initialize (using std::copy())
  }

  int size() const { return sz; }  // the current size
  double get(int n) const { return elem[n]; }  // access: read
  void set(int n, double v) { elem[n] = v; } // access: write
  ~vector() { delete[] elem; }  // deallocates memory
  vector(const vector&);  // copy constructor: define copy
};

vector::vector(const vector& arg)
  // allocate elements, then initialize them by copying
  : sz{arg.sz}, elem{new double[arg.sz]}
{
  std::copy(arg.elem, arg.elem+sz, elem); 
}

int main()
{
  vector v(3);  
  v.set(2, 2.2);
  vector v2 = v;
  std::cout << " Size of v2: " << v2.size() << '\n';
  v.set(1,99);
  v2.set(0,88);
  std::cout << " v[0]: " << v.get(0) 
    << ", v2[1]: " << v2.get(1) << '\n';

}
