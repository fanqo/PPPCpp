#include <iostream>

using namespace std;
// an almost real vector of Ts:
template<typename T>
class vector{  // read "for all types T" 
  int sz;  // the size
  T* elem;  // a pointer to the elements
  int space;  // size + free space
public:
  vector() : sz{0}, elem{nullptr}, space{0} {}  // default constructor
  explicit vector(int s) : sz{s}, elem{new T[s]}, space{s}
  {
    for (int i = 0; i < sz; ++i) elem[i] = 0;  // elements are initialized
  }

  vector(const vector&);  // copy constructor
  vector& operator=(const vector&);  // copy assignment

  vector(vector&&);  // move constructor
  vector& operator=(vector&&);  // move assignment

  ~vector() { delete[] elem; }  // destructor

  T& operator[](int n) { return elem[n]; }  // access: return reference
  const T& operator[](int n) const { return elem[n]; } 

  int size() const { return sz; }  // the current size
  int capacity() const { return space; }

  void resize(int, T def=T());
  void push_back(const T&);
  void reserve(int);
};

template<typename T> vector<T>::vector(const vector<T>& arg)
  : sz{arg.sz}, elem{new T[arg.sz]}
{
  copy(arg.elem, arg.elem+sz, elem);
}

template<typename T> vector<T>& vector<T>::operator=(const vector<T>& a)
{
  T* p = new T[a.sz];
  for (int i = 0; i < a.sz; ++i) p[i] = a.elem[i];
  delete[] elem;
  space = sz = a.sz;
  elem = p;
  return *this;
}

template<typename T> vector<T>::vector(vector<T>&& a)
  : sz{a.sz}, elem{a.elem}
{
  a.sz = 0;
  a.elem = nullptr;
}

template<typename T> vector<T>& vector<T>::operator=(vector<T>&& a)
{
  delete[] elem;
  elem = a.elem;
  sz = a.sz;
  a.elem = nullptr;
  a.sz = 0;
  return *this;
}

template<typename T> void vector<T>::reserve(int newalloc)
{
  if (newalloc <= space) return;
  T* p = new T[newalloc];
  for (int i = 0; i < sz; ++i) p[i] = elem[i];
  delete[] elem;
  elem = p;
  space = newalloc;
}

template<typename T> void vector<T>::resize(int newsize, T def)
{
  reserve(newsize);
  for (int i = sz; i < newsize; ++i) elem[i] = def;
  sz = newsize;
}

template<typename T> void vector<T>::push_back(const T& d)
{
  if (space == 0)
    reserve(8);
  else if (sz == space)
    reserve(2*space);

  elem[sz] = d;
  ++sz;
}

int main()
{
  vector<double> v1;
  v1.resize(100);  // add 100 copies of double(), that is, 0.0
  v1.resize(200, 0.0); // add 100 copies of 0.0 -- mentioning 0.0 is redundant
  v1.resize(300, 1.0);  // add 100 copies of 1.0

  cout << "v1[55]: " << v1[55] << '\n'
    << "v1[155]: " << v1[155] << '\n'
    << "v1[255]: " << v1[255] << '\n';
}
