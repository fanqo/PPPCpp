#include <iostream>

using namespace std;
// an almost real vector of Ts:
template<typename T, typename A = allocator<T>>
class vector{  // read "for all types T" 
  A alloc;
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

template<typename T, typename A> 
vector<T, A>::vector(const vector<T, A>& arg)
  : sz{arg.sz}, elem{new T[arg.sz]}
{
  copy(arg.elem, arg.elem+sz, elem);
}

template<typename T, typename A> 
vector<T, A>& vector<T, A>::operator=(const vector<T, A>& a)
{
  T* p = new T[a.sz];
  for (int i = 0; i < a.sz; ++i) p[i] = a.elem[i];
  delete[] elem;
  space = sz = a.sz;
  elem = p;
  return *this;
}

template<typename T, typename A> 
vector<T, A>::vector(vector<T, A>&& a)
  : sz{a.sz}, elem{a.elem}
{
  a.sz = 0;
  a.elem = nullptr;
}

template<typename T, typename A> 
vector<T, A>& vector<T, A>::operator=(vector<T, A>&& a)
{
  delete[] elem;
  elem = a.elem;
  sz = a.sz;
  a.elem = nullptr;
  a.sz = 0;
  return *this;
}

template<typename T, typename A> 
void vector<T, A>::reserve(int newalloc)
{
  if (newalloc <= space) return;
  T* p = alloc.allocate(newalloc);  // allocate new space 
  for (int i = 0; i < sz; ++i) alloc.construct(&p[i], elem[i]);  // copy
  for (int i = 0; i < sz; ++i) alloc.destroy(&elem[i]);  // destroy
  alloc.deallocate(elem, space);  // deallocate old space
  elem = p;
  space = newalloc;
}

template<typename T, typename A> 
void vector<T, A>::resize(int newsize, T val)
{
  reserve(newsize);
  for (int i = sz; i < newsize; ++i) alloc.construct(&elem[i], val); //construct
  for (int i = newsize; i < sz; ++i) alloc.destroy(&elem[i]);  // destroy
  sz = newsize;
}

template<typename T, typename A> 
void vector<T, A>::push_back(const T& val)
{
  if (space == 0)
    reserve(8);  // start with space for 8 elements
  else if (sz == space)
    reserve(2*space);  // get more space

  alloc.construct(&elem[sz], val);  // add val at end
  ++sz;  // increase the size
}

int main()
{
  vector<int> v(100);
  v[-200] = v[200];
  int i;
  cin >> i;
  v[i] = 999;
}
