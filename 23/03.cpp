#include "../std_lib_facilities.h"

struct bad_from_string : std::bad_cast {
  const char* what() const _NOEXCEPT
  {
    return "bad cast from string";
  }
};

template<typename T> T from_string(const string& s)
{
  istringstream is {s};
  T t;
  if (!(is >> t)) throw bad_from_string{};
  return t;
}

int main()
  try{
    cout << "Please input a string" << endl;
    string s;
    cin >> s;

    int i = from_string<int>(s);
    cout << s << "-> " << i << endl;
  }
  catch (bad_from_string e) {
    error("bad input string");
  }
  catch (...) {
    error("unknown error");
  }

