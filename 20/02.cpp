#include <iostream>
#include <vector>
#include <list>
#include <sstream>
#include <typeinfo>

using namespace std;
template<typename T>
void f(T t)
{
  if (t == "Hello") {
    cout << "Passed correctly" << endl;
  } else {
    cout << "Passed incorrectly" << endl;
  }

  if (t > "Howdy") {
    cout << "Howdy goes first" << endl;
  } else {
    cout << t << " goes first" << endl;
  }
}

template<typename T>
void g(T t)
{
  ostringstream os;
  os << typeid(T).name();
  cout << "For " << os.str() << ": " << endl;
  f(t);
}

main()
{
  char cc[] = {'H','e','l','l','o'};
  vector<char> cv {'H','e','l','l','o'};
  list<char> cl {'H','e','l','l','o'};
  string s {"Hello"};

  g<char[]>(cc);
  g<string>(s);
}

