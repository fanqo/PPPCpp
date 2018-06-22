#include <iostream>
#include <sstream>

using namespace std;

template<typename Target, typename Source>
Target to(Source arg)
{
  stringstream interpreter;
  Target result;

  if (
      !(interpreter << arg)
      || !(interpreter >> result)
      || !(interpreter >> std::ws).eof()
     )
    throw runtime_error{"to<>() failed"};

  return result;
}

int main()
  try{
    cout << "Please enter a string" << endl;
    string s;
    cin >> s;

    cout << "to<int>(s): " << to<int>(s) << endl;
  }
  catch(exception& e) {
    cerr << "exception: " << e.what() << endl;
  }
  catch(...) {
    cerr << "unknown exception" << endl;
  }






