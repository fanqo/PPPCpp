//
#include "../../std_lib_facilities.h"

class Name_value {
public:
  string name;
  double value;
};

int main()
  try{
    vector<Name_value> t;
    string s;
    double d;

    cout << "Please enter name-and-value pairs (e.g. Joe 12): \n";
    cout << "Terminate entering with Noname 0 pair.\n";
    cin >> s >> d;
    while (s != "Noname" && d != 0) {
      t.push_back({s, d});
      cin >> s >> d;
    }
    for (int i = 0; i < t.size(); ++i) {
      for (int j = i+1; j < t.size(); ++j) 
	if (t[j].name == t[i].name) error("Duplicate names");
    }

    cout << '\n'
	 << "The name-and-value pairs are: \n";
    for (int i = 0; i < t.size(); ++i) {
      cout << t[i].name << ' ' << t[i].value << '\n';
    }

    return 0;
  }
  catch (exception& e) {
    cerr << "Error: " << e.what() << '\n';
  }
  catch (...) {
    cerr << "Unkown excpetion!\n";
  }

