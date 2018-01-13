#include <iostream>

class vector {
  int sz;  // the size
  double* elem;  // a pointer to the elements
public:
  explicit vector(int s)  // constructor (s is the element count)
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
  ~vector() { delete[] elem; }  // deallocates memory
  vector(const vector&);  // copy constructor: define copy
  vector& operator=(const vector&);  // copy assignment
  vector(vector&& a);  // move constructor
  vector& operator=(vector&&);  // move assignment
  double& operator[](int n) { return elem[n]; } // return reference
};

vector::vector(const vector& arg)
  // allocate elements, then initialize them by copying
  : sz{arg.sz}, elem{new double[arg.sz]}
{
  std::copy(arg.elem, arg.elem+sz, elem); 
}

vector& vector::operator=(const vector& a)
  // make this vector a copy of a
{
  double* p = new double[a.sz];  // allocate new space
  std::copy(a.elem, a.elem+a.sz, p);  // copy elements
  delete[] elem;  // deallocate old space
  elem = p;  // now we can reset elem
  sz = a.sz;
  return *this;  // return a self-reference
}

vector::vector(vector&& a)
  :sz{a.sz}, elem{a.elem}  // copy a's elem and sz
{
  a.sz = 0;  // make a the empty vector
  a.elem = nullptr;
}

vector& vector::operator=(vector&& a) // move a to this vector
{
  delete[] elem;  // deallocate old space
  elem = a.elem;  // copy a's elem and sz
  sz = a.sz;
  a.elem = nullptr;  // make a the empty vector
  a.sz = 0; 
  return *this;  // return a self-reference
}

int main()
{
  vector v(10);  
  for (int i = 0; i < v.size(); ++i) {
    v[i] = i;
    std::cout << v[i];
  }
}
