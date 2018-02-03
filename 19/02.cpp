#include <iostream>

class vector {
  int sz;  // the size
  double* elem;  // a pointer to the elements
  int space;
public:
  vector();
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
  double operator[](int n) { return elem[n]; } // return element
  void reserve(int newalloc);  // add space for new elements
  int capacity() const { return space; }   // vector capacity
  void resize(int newsize);
  void push_back(double);
};

vector::vector() : sz{0}, elem{nullptr}, space{0} { }

vector::vector(const vector& arg)
  // allocate elements, then initialize them by copying
  : sz{arg.sz}, elem{new double[arg.sz]}
{
  std::copy(arg.elem, arg.elem+sz, elem); 
}

vector& vector::operator=(const vector& a)
  // like copy constructor, but we must deal with old elements
{
  if (this == &a) return *this;  // self-assignment, no work needed

  if (a.sz <= space) {   // enough space, no need for new allocation
    for (int i = 0; i < a.sz; ++i) elem[i] = a.elem[i]; // copy elements
    sz = a.sz;
    return *this;
  }

  double* p = new double[a.sz];  // allocate new space
  for (int i=0; i < a.sz; ++i) p[i] = a.elem[i]  // copy elements
  delete[] elem;  // deallocate old space
  space = sz = a.sz;  // set new size
  elem = p;  // now we can reset elem
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

void vector::reserve(int newalloc)
{
  if (newalloc <= space) return; // never decrease allocation
  double* p = new double[newalloc];  // allocate new space
  for (int i = 0; i < sz; ++i) p[i] = elem[i];  // copy old elements
  delete[] elem;  // deallocate old space
  elem = p;
  space = newalloc;
}

void vector::resize(int newsize)
  // make the vector have newsize elements
  // initialize each new element with the default value 0.0
{
  reserve(newsize);
  for (int i = sz; i < newsize; ++i) elem[i] = 0;  // initialize new elements
  sz = newsize;
}

void vector::push_back(double d)
  //  increase vector size by one; initialize the new element with d 
{
  if (space == 0)
    reserve(8);  // start with space for 8 elements
  else if (sz == space)
    reserve(2*space);  // get more space

  elem[sz] = d;  // add d at end
  ++sz;  // increase the size (sz is the number of elements)
}


int main()
{
  vector v(10);  
  std::cout << "v(10)'s size: " << v.size() << '\n'
    << "v(10)'s capacity: " << v.capacity() << '\n';
  v.resize(5);
  std::cout << "v(5)'s size: " << v.size() << '\n'
    << "v(5)'s capacity: " << v.capacity() << '\n';
  vector v2(10);
  v2.resize(12);
  std::cout << "v2(12)'s size: " << v2.size() << '\n'
    << "v2(12)'s capacity: " << v2.capacity() << '\n';
  v2.resize(10);
  std::cout << "v2(10)'s size: " << v2.size() << '\n'
    << "v2(10)'s capacity: " << v2.capacity() << '\n';
  vector v3;
  std::cout << "v3's size: " << v3.size() << '\n'
    << "v3's capacity: " << v3.capacity() << '\n';
  v3.resize(5);
  std::cout << "v3(5)'s size: " << v3.size() << '\n'
    << "v3(5)'s capacity: " << v3.capacity() << '\n';
  // v[3] = x;  // error: expression is not assignable
}
